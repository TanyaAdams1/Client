#ifndef MUSIC_H
#define MUSIC_H

#include <QDialog>

namespace Ui {
class music;
}

class music : public QDialog
{
    Q_OBJECT

public:
    explicit music(QWidget *parent = 0);
    ~music();

signals:
    void volume(int volumn);

    void NEXT();

    void previous();

    void pause();

    void goon();

private slots:
    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pos_clicked();

private:
    Ui::music *ui;
};

#endif // MUSIC_H
