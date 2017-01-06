#include "music.h"
#include "ui_music.h"

music::music(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::music)
{
    ui->setupUi(this);

    ui->label->setAlignment(Qt::AlignCenter);

    ui->horizontalSlider->setStyleSheet("QSlider::groove:horizontal,QSlider::add-page:horizontal{height:3px;border-radius:3px;background:#18181a;}"
                                        "QSlider::sub-page:horizontal{height:8px;border-radius:3px;background:#663300;}"
                                        "QSlider::handle:horizontal{width:12px;margin-top:-5px; margin-bottom:-4px;background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 #565656,stop:0.8 #565656);}"
                                        "QSlider::groove:vertical,QSlider::sub-page:vertical{width:8px;border-radius:3px;background:#D8D8D8;}"
                                        "QSlider::add-page:vertical{width:8px;border-radius:3px;background:#008aff;}"
                                        "QSlider::handle:vertical{height:12px;margin-left:-5px;margin-right:-4px;border-radius:6px;background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 #565656,stop:0.8 #565656);}");

    this->setFixedSize(this->width(), this->height());
}

music::~music()
{
    delete ui;
}

void music::on_horizontalSlider_valueChanged(int value)
{
    emit volume(value);
}

void music::on_pushButton_clicked()
{
    emit NEXT();
}

void music::on_pushButton_2_clicked()
{
    emit previous();
}

void music::on_pos_clicked()
{
    if(ui->pos->text()==("暂停播放"))
    {
        emit pause();
        ui->pos->setText("继续播放");
    }
    else
    {
        emit goon();
        ui->pos->setText("暂停播放");
    }
}
