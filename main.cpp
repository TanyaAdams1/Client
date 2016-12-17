#include "hall.h"
#include "login.h"
#include <QApplication>
#include "gui.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    gui b;
    b.showlogin();
    b.warning();
    b.addroom("gking","3/8");
    b.showHall();
    b.addroom("gking301","3/80");

    return a.exec();
}
