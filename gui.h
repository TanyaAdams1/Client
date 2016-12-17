#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QWidget>
#include <QString>
#include "hall.h"
#include "login.h"
#include "createroom.h"

class gui :public QObject
{
    Q_OBJECT

public:
    explicit gui(QObject *parent=0);

    void showlogin();

    QPair<QString,int> acquireServer();

    void showHall();

    void warning();

    void addroom(QString,QString);

    void removeroom();

    void enterroomok();

    void hidehall();

signals:

    void Newroom(const QPair<QString,int> pair);

    void enterRoom(const QString ip);

private slots:

    void openlogin();

    void showcreateroom();

    void onenewroom(const QPair<QString,int> pair);

    void enterroom(const QString ip);

    void openweb();

private:

    hall w;

    login l;

    createroom c;

};

#endif // GUI_H
