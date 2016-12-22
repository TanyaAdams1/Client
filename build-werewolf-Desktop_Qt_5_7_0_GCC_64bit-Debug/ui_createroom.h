/********************************************************************************
** Form generated from reading UI file 'createroom.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEROOM_H
#define UI_CREATEROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_createroom
{
public:
    QLabel *label_6;
    QLineEdit *roomname;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *number;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *createroom)
    {
        if (createroom->objectName().isEmpty())
            createroom->setObjectName(QStringLiteral("createroom"));
        createroom->resize(400, 300);
        label_6 = new QLabel(createroom);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 401, 301));
        label_6->setStyleSheet(QStringLiteral("border-image: url(:/image/3.jpg);"));
        roomname = new QLineEdit(createroom);
        roomname->setObjectName(QStringLiteral("roomname"));
        roomname->setGeometry(QRect(195, 81, 125, 31));
        roomname->setStyleSheet(QStringLiteral("color: rgb(222, 222, 222);"));
        label = new QLabel(createroom);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(91, 81, 104, 31));
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(222, 222, 222);\n"
"background-color: rgba(10, 10, 40, 200);"));
        label_2 = new QLabel(createroom);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(91, 150, 104, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(222, 222, 222);\n"
"background-color: rgba(10, 10, 40, 200);"));
        number = new QLineEdit(createroom);
        number->setObjectName(QStringLiteral("number"));
        number->setGeometry(QRect(195, 150, 125, 31));
        number->setStyleSheet(QStringLiteral("color: rgb(222, 222, 222);"));
        pushButton = new QPushButton(createroom);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 220, 91, 31));
        pushButton_2 = new QPushButton(createroom);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 220, 91, 31));
        label_3 = new QLabel(createroom);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 120, 131, 21));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"Adobe Arabic\";"));
        label_4 = new QLabel(createroom);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 190, 131, 21));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"Adobe Arabic\";"));

        retranslateUi(createroom);
        QObject::connect(pushButton_2, SIGNAL(clicked()), createroom, SLOT(close()));

        QMetaObject::connectSlotsByName(createroom);
    } // setupUi

    void retranslateUi(QDialog *createroom)
    {
        createroom->setWindowTitle(QApplication::translate("createroom", "\345\210\233\345\273\272\346\210\277\351\227\264", 0));
        label_6->setText(QString());
        label->setText(QApplication::translate("createroom", "\350\256\276\347\275\256\346\210\277\351\227\264ID", 0));
        label_2->setText(QApplication::translate("createroom", "\350\256\276\347\275\256\346\200\273\344\272\272\346\225\260", 0));
        pushButton->setText(QApplication::translate("createroom", "\345\210\233\345\273\272\346\210\277\351\227\264", 0));
        pushButton_2->setText(QApplication::translate("createroom", "\345\217\226\346\266\210", 0));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class createroom: public Ui_createroom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEROOM_H
