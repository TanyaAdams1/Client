/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_login
{
public:
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *port;
    QLineEdit *ip;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(400, 300);
        label_5 = new QLabel(login);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(0, -140, 411, 471));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/image/2.jpg);"));
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(320, 40, 81, 31));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setStyleSheet(QLatin1String("color: rgb(223, 223, 223);\n"
"font: 75 20pt \"Adobe Arabic\";"));
        port = new QLineEdit(login);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(165, 138, 133, 31));
        port->setStyleSheet(QStringLiteral("color: rgb(222, 222, 222);"));
        ip = new QLineEdit(login);
        ip->setObjectName(QStringLiteral("ip"));
        ip->setEnabled(true);
        ip->setGeometry(QRect(165, 60, 133, 31));
        ip->setStyleSheet(QStringLiteral("color: rgb(222, 222, 222);"));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(84, 60, 81, 31));
        label->setStyleSheet(QLatin1String("color: rgb(40, 60, 100);\n"
"color: rgb(222, 222, 222);\n"
"background-color: rgba(10, 10, 40, 200);\n"
"font: 75 20pt \"Adobe Arabic\";"));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(84, 138, 81, 30));
        label_2->setStyleSheet(QLatin1String("color: rgb(40, 60, 100);\n"
"color: rgb(222, 222, 222);\n"
"background-color: rgba(10, 10, 40, 200);\n"
"font: 75 20pt \"Adobe Arabic\";"));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);
        label_3->setGeometry(QRect(160, 100, 141, 21));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"Adobe Arabic\";"));
        label_4 = new QLabel(login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 180, 141, 21));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"Adobe Arabic\";"));
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 220, 81, 31));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(login);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 220, 81, 31));
        label_5->raise();
        port->raise();
        ip->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        pushButton->raise();
        pushButton_2->raise();
        lineEdit->raise();
        QWidget::setTabOrder(ip, port);
        QWidget::setTabOrder(port, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, lineEdit);

        retranslateUi(login);
        QObject::connect(pushButton_2, SIGNAL(clicked()), login, SLOT(close()));

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "\347\231\273\345\275\225", 0));
        label_5->setText(QString());
        lineEdit->setText(QApplication::translate("login", "ip", 0));
        label->setText(QApplication::translate("login", "ip:", 0));
        label_2->setText(QApplication::translate("login", "port:", 0));
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton->setText(QApplication::translate("login", "OK", 0));
        pushButton_2->setText(QApplication::translate("login", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
