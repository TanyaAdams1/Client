#ifndef CORE_H
#define CORE_H

#include <QObject>
#include "gui.h"
#include "tcpsock.h"
#include "message.h"
enum Position{LOGIN,HALL,ROOM,GAME};
class Core : public QObject
{
    Q_OBJECT
public:
    explicit Core(QObject *parent = 0);
signals:

private:
    int id;
    int roomid;
    gui G;
    TcpSock *socket;
    QThread *thread;
    Position pos;
    void connectToServer();
    void sendEmptyMessage(int,int,int,int);
    void onNetworkError();
    void handleMessage(Message);
    void genFeedback(Message);

    void Newroom(const QPair<QString,int> pair);
    void enterRoom(const QString ip);
    void ready();
    void cancel();
    void quit();
    void speak(QString);
    void endspeaking();
    void explode();
};

#endif // CORE_H
