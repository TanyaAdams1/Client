#include "gamewindow.h"
#include <QApplication>
#include "gui.h"
//剩余任务：女巫是否使用毒药，发出自爆信号（参数为座位号），接受自爆信息，根据按下的按钮确定所
//杀/查/毒的人—获取所查的人的身份并对预言家显示
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gui maingui;

    maingui.showgame();
    maingui.myplayer(4,1234);
    maingui.addplayer(2,5678);
    maingui.addplayer(4,1234);
    maingui.addplayer(5,2333);
    maingui.start(1);
    maingui.getmessage(0,"天黑请闭眼");
    maingui.getmessage(1,"我是预言家");
    maingui.myturn();
    maingui.gameover();
    return a.exec();

}
