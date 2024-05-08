/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLineEdit *UsernameInputRegister;
    QLineEdit *PasswordLabelRegister_2;
    QLabel *UsernameLabelRegister;
    QLabel *PasswordLabelRegister;
    QRadioButton *DocRadButt;
    QRadioButton *NurRadButt;
    QRadioButton *PatiRadButt;
    QPushButton *FinishRegister;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(400, 416);
        UsernameInputRegister = new QLineEdit(Register);
        UsernameInputRegister->setObjectName("UsernameInputRegister");
        UsernameInputRegister->setGeometry(QRect(100, 60, 113, 21));
        PasswordLabelRegister_2 = new QLineEdit(Register);
        PasswordLabelRegister_2->setObjectName("PasswordLabelRegister_2");
        PasswordLabelRegister_2->setGeometry(QRect(100, 120, 113, 21));
        UsernameLabelRegister = new QLabel(Register);
        UsernameLabelRegister->setObjectName("UsernameLabelRegister");
        UsernameLabelRegister->setGeometry(QRect(20, 60, 71, 16));
        PasswordLabelRegister = new QLabel(Register);
        PasswordLabelRegister->setObjectName("PasswordLabelRegister");
        PasswordLabelRegister->setGeometry(QRect(20, 120, 61, 20));
        DocRadButt = new QRadioButton(Register);
        DocRadButt->setObjectName("DocRadButt");
        DocRadButt->setGeometry(QRect(270, 60, 99, 20));
        NurRadButt = new QRadioButton(Register);
        NurRadButt->setObjectName("NurRadButt");
        NurRadButt->setGeometry(QRect(270, 90, 99, 20));
        PatiRadButt = new QRadioButton(Register);
        PatiRadButt->setObjectName("PatiRadButt");
        PatiRadButt->setGeometry(QRect(270, 120, 99, 20));
        FinishRegister = new QPushButton(Register);
        FinishRegister->setObjectName("FinishRegister");
        FinishRegister->setGeometry(QRect(150, 300, 100, 32));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        UsernameLabelRegister->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        PasswordLabelRegister->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        DocRadButt->setText(QCoreApplication::translate("Register", "Doctor", nullptr));
        NurRadButt->setText(QCoreApplication::translate("Register", "Nurse", nullptr));
        PatiRadButt->setText(QCoreApplication::translate("Register", "Patient", nullptr));
        FinishRegister->setText(QCoreApplication::translate("Register", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
