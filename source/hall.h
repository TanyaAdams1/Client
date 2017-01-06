#ifndef HALL_H
#define HALL_H

#include <QMainWindow>
#include <QString>
#include <QApplication>
#include <QTableWidgetItem>
#include "music.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>

namespace Ui {
class hall;
}

class hall : public QMainWindow
{
    Q_OBJECT

public:
    explicit hall(QWidget *parent = 0);

    ~hall();

    void addroom(QString, QString);

    void removeroom(QString);

    void setup(QString, QString);

    void removeall();

    void closehall();

    void showhall();

signals:

    void createbutton_clicked();

    void enterroom(const int id);

    void openlogin();

    void openweb();

    void warning();

    void stoptimer();

private slots:
    void on_action_Q_triggered();

    void on_action_J_triggered();

    void on_action_2_triggered();

    void on_action_triggered();

    void on_createButton_clicked();

    void getitem(QTableWidgetItem*item);

    void on_pushButton_clicked();

    void timerDone();

    void timerDone2();

    void changevolume(int volume);

    void on_action_3_triggered();

    void nextsong();

    void previoussong();

    void pos();

    void goon();
private:
    Ui::hall *ui;
    double i;
    music m;
    QMediaPlayer *player;
    QMediaPlaylist* mediaList;
};

#endif // HALL_H
