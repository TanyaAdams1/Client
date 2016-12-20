#include "gui.h"
#include<gamewindow.h>
gui::gui()
{
    QObject::connect(&g,&GameWindow::prepared,this,&gui::gprepared);
    QObject::connect(&g,&GameWindow::unprepared,this,&gui::gunprepared);
    QObject::connect(&g,&GameWindow::goback,this,&gui::ggoback);
    QObject::connect(&g,&GameWindow::exit,this,&gui::gexit);
    QObject::connect(&g,&GameWindow::endturn,this,&gui::gendturn);
}
void gui::showgame()
{
    g.show();
}

void gui::addplayer(int seat,int id)
{
    g.addplayer(seat-1,id);
}
void gui::myplayer(int seat, int id)
{
    g.myplayer(seat-1,id);
}

void gui::gprepared(int id)
{
    emit prepared(id);
}
void gui::gunprepared(int id)
{
    emit unprepared(id);
}
void gui::ggoback(int id)
{
    emit goback(id);
}
void gui::gexit(int id)
{
    emit exit(id);
}
void gui::start(int role)
{
    g.start(role);
}
void gui::getmessage(int seat, QString str)
{
    g.getmessage(seat,str);
}
void gui::gspeak(int id,QString str)
{
    emit speak(id,str);
}
void gui::myturn()
{
    g.myturn();
}
void gui::gendturn()
{
    emit endturn();
}

void gui::gameover()
{
    g.gameover();
}
