#include "gui.h"
#include "createroom.h"
#include "hall.h"
#include "warning.h"
#include "login.h"
#include <QtCore>
#include <QObject>
#include <QDesktopServices>
#include <QUrl>



gui::gui(QObject *parent)
    :QObject(parent)
{
    QObject::connect(&w,&hall::createbutton_clicked,this,&gui::showcreateroom);
    QObject::connect(&c,&createroom::newroom,this,&gui::onenewroom);
    QObject::connect(&w,&hall::enterroom,this,&gui::enterroom);
    QObject::connect(&w,&hall::openlogin,this,&gui::openlogin);
    QObject::connect(&w,&hall::openweb,this,&gui::openweb);
}

QPair<QString,int> gui::acquireServer(){
    return l.getpair();
}

void gui::showHall(){
    w.setup(l.getpair().first,QString::number(l.getpair().second,10));
    w.show();
}

void gui::showlogin(){
    l.exec();
}

void gui::showcreateroom(){
    c.exec();
}

void gui::onenewroom(const QPair<QString, int> pair){
    emit Newroom(pair);
    c.hide();
}

void gui::warning(){
    Warning warning;
    warning.exec();
}

void gui::addroom(QString a, QString b){
    w.addroom(a,b);
}

void gui::removeroom(){
    w.removeall();
}

void gui::enterroom(const QString ip){
    emit enterRoom(ip);
}

void gui::enterroomok(){
    w.hide();
}

void gui::openlogin(){
    w.hide();
    l.reset();
    l.show();
}

void gui::openweb(){
    QDesktopServices::openUrl(QUrl("http://baike.baidu.com/link?url=NIp1tudVwrioy0g3GF4QEles_ctV6TEpD_-sQ21huAlzyu7m-g4l1WrnQzhSovRjZpaJ1Zf3hMsrjejzpOESFludN9CZfCfA2F4PPDvXEdYTww_NCJP6unzDD6DiNGGd"));
}

void gui::hidehall(){
    w.hide();
}
