#ifndef CREATEROOM_H
#define CREATEROOM_H

#include <QDialog>

namespace Ui {
class createroom;
}

class createroom : public QDialog
{
    Q_OBJECT

public:

    explicit createroom(QWidget *parent = 0);

    ~createroom();

    void hidewindow();

    void showcreateroom();

signals:

    void newroom(const int number);

    void stoptimer();

private slots:
    void timerDone();

    void timerDone2();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
private:
    Ui::createroom *ui;

    int Number;

    double i=1;
};

#endif // CREATEROOM_H
