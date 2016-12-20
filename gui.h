#ifndef GUI_H
#define GUI_H
#include "gamewindow.h"
#include<QObject>
#include<QString>
class gui:public QObject
{
    Q_OBJECT
public:
    gui();
    void showgame();
    void addplayer(int seat, int id);
    void myplayer(int seat, int id);
    void start(int role);
    void getmessage(int seat,QString str);
    void myturn();
    void gameover();
signals:
    void prepared(int);
    void unprepared(int);
    void goback(int);
    void exit(int);
    void speak(int,QString);
    void endturn();
private:
    GameWindow g;
    void gprepared(int id);
    void gunprepared(int id);
    void ggoback(int id);
    void gexit(int id);
    void gspeak(int, QString);
    void gendturn();
};

#endif // GUI_H
