/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *UsernameLabel;
    QLabel *PasswordLabel;
    QLineEdit *UsernameInput;
    QLineEdit *PasswordInput;
    QPushButton *LoginButton;
    QPushButton *RegisterButton;
    QLabel *PixmapLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(510, 536);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        UsernameLabel = new QLabel(centralwidget);
        UsernameLabel->setObjectName("UsernameLabel");
        UsernameLabel->setGeometry(QRect(160, 250, 71, 16));
        PasswordLabel = new QLabel(centralwidget);
        PasswordLabel->setObjectName("PasswordLabel");
        PasswordLabel->setGeometry(QRect(160, 300, 71, 16));
        UsernameInput = new QLineEdit(centralwidget);
        UsernameInput->setObjectName("UsernameInput");
        UsernameInput->setGeometry(QRect(230, 250, 113, 21));
        PasswordInput = new QLineEdit(centralwidget);
        PasswordInput->setObjectName("PasswordInput");
        PasswordInput->setGeometry(QRect(230, 300, 113, 21));
        PasswordInput->setEchoMode(QLineEdit::Password);
        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(160, 390, 81, 32));
        RegisterButton = new QPushButton(centralwidget);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setGeometry(QRect(260, 390, 81, 32));
        PixmapLabel = new QLabel(centralwidget);
        PixmapLabel->setObjectName("PixmapLabel");
        PixmapLabel->setGeometry(QRect(150, 20, 211, 201));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 510, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        UsernameLabel->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        RegisterButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        PixmapLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
