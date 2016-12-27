#include "core.h"

Core::Core(QObject *parent) : QObject(parent)
{
    connectToServer();
    connect(&G,&gui::Newroom,this,&Core::Newroom);
    connect(&G,&gui::enterRoom,this,&Core::enterRoom);
    connect(&G,&gui::ready,this,&Core::ready);
    connect(&G,&gui::endspeaking,this,&Core::endspeaking);
    connect(&G,&gui::cancel,this,&Core::cancel);
    connect(&G,&gui::quit,this,&Core::quit);
    connect(&G,&gui::speak,this,&Core::speak);
    connect(&G,&gui::explode,this,&Core::explode);
}
void Core::connectToServer(){
    gui.showlogin();
    QPair<QString,int> server=gui.acquireServer();
    socket=new TcpSock(0,server.first,server.second);
    connect(socket,&TcpSock::emitMessage,this,&Core::handleMessage);
    pos=HALL;
    gui.showHall();
    thread=new QThread();
    socket->moveToThread(thread);
    thread->start();
    connect(socket,&TcpSock::destroyed,thread,&QThread::quit);
    connect(thread,&QThread::finished,thread,&QThread::deleteLater);
}
void Core::sendEmptyMessage(int t, int st, int rt, int ri){
    Message *msg=new Message(t,st,rt,ri,2,id);
    QCoreApplication::postEvent(socket,msg);
}
void Core::onNetworkError(){
    gui.hidehall();
    pos=LOGIN;
    connectToServer();
}
void Core::handleMessage(Message msg){
    if(msg.getType()==0){
        switch(msg.getSubtype()){
        case 2:
        case 3:
            if(msg.getArgument().isEmpty())
                return;
            id=msg.getArgument()[0];
            break;
        }
    }
    else if(msg.getType()==1){
        switch(msg.getSubtype()){
        case 1:
            if(msg.getArgument().isEmpty())
                return;
            gui.role(msg.getArgument()[0]);
            break;
        case 2:
        case 3:
        case 4:
        case 10:
            gui.showmessage(-1,msg.getDetail());
            break;
        case 5:
        case 12:
            gui.myturn();
            break;
        case 19:
            gui.endturn();
        default:
            genFeedback(msg);
        }
    }
    else if(msg.getType()==2){
        switch(msg.getSubtype()){
        case 0:
            if(msg.getArgument().isEmpty())
                return;
            if(msg.getArgument()[0]){
                roomid=msg.getSenderid();
                gui.hidehall();
                gui.showgame();
                sendEmptyMessage(2,6,2,roomid);
                pos=ROOM;
            }
            else
                gui.warning();
            break;
        case 3:
            if(msg.getArgument().isEmpty())
                return;
            if(msg.getArgument()[0]){
                pos=HALL;
                gui.showHall();
            }
            else
                gui.warning();
            break;
        case 4:
            pos=GAME;
            break;
        case 5:
            pos=ROOM;
        case 6:

        }
    }
}
void Core::genFeedback(Message msg){
    if(msg.getArgument().isEmpty())
        return;
    int st=msg.getSubtype();
    bool allowGiveup=false;
    if(st==8||st==14||st=18)
        allowGiveup=true;
    if(st==5||st==11){
        Message *feedback=new Message(msg.getType(),msg.getSubtype(),msg.getSenderType(),msg.getSenderid(),1,id);
        feedback->addArgument(gui.choose());
        QCoreApplication::postEvent(socket,feedback);
    }
    else if(st==15){
        Message *feedback=new Message(msg.getType(),msg.getSubtype(),msg.getSenderType(),msg.getSenderid(),1,id);
        feedback->addArgument(gui.decide(msg.getArgument(),allowGiveup));
        feedback->addArgument(gui.choose());
        QCoreApplication::postEvent(socket,feedback);
    }
    else{
        int ret=gui.decide(msg.getArgument(),allowGiveup);
        Message *feedback=new Message(msg.getType(),msg.getSubtype(),msg.getSenderType(),msg.getSenderid(),1,id);
        feedback->addArgument(ret);
        QCoreApplication::postEvent(socket,feedback);
    }
}
void Core::Newroom(const QPair<QString, int> pair){

}
void Core::enterRoom(const QString ip){

}
void Core::ready(){
    sendEmptyMessage(2,1,2,roomid);
}
void Core::cancel(){
    sendEmptyMessage(2,2,2,roomid);
}
void Core::quit(){
    Message *msg=new Message(2,3,2,roomid);
    msg->addArgument(0);
    QCoreApplication::postEvent(socket,msg);
}
void Core::speak(QString content){
    Message *msg=new Message(2,7,2,roomid);
    msg->setDetail(content);
    msg->addArgument(0);
    QCoreApplication::postEvent(socket,msg);
}
void Core::endspeaking(){
    Message *msg=new Message(2,7,2,roomid);
    msg->addArgument(1);
    QCoreApplication::postEvent(socket,msg);
}
