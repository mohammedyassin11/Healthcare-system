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
#include <QtWidgets/QGroupBox>
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
    QPushButton *FinishRegister;
    QLineEdit *UsernameInputRegister_2;
    QLineEdit *UsernameInputRegister_3;
    QGroupBox *groupBox;
    QRadioButton *PatiRadButt;
    QRadioButton *DocRadButt;
    QRadioButton *NurRadButt;
    QLabel *UsernameLabelRegister_2;
    QLabel *UsernameLabelRegister_3;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(522, 478);
        UsernameInputRegister = new QLineEdit(Register);
        UsernameInputRegister->setObjectName("UsernameInputRegister");
        UsernameInputRegister->setGeometry(QRect(100, 200, 113, 21));
        PasswordLabelRegister_2 = new QLineEdit(Register);
        PasswordLabelRegister_2->setObjectName("PasswordLabelRegister_2");
        PasswordLabelRegister_2->setGeometry(QRect(100, 260, 113, 21));
        PasswordLabelRegister_2->setEchoMode(QLineEdit::Password);
        UsernameLabelRegister = new QLabel(Register);
        UsernameLabelRegister->setObjectName("UsernameLabelRegister");
        UsernameLabelRegister->setGeometry(QRect(20, 200, 71, 16));
        PasswordLabelRegister = new QLabel(Register);
        PasswordLabelRegister->setObjectName("PasswordLabelRegister");
        PasswordLabelRegister->setGeometry(QRect(20, 260, 61, 20));
        FinishRegister = new QPushButton(Register);
        FinishRegister->setObjectName("FinishRegister");
        FinishRegister->setGeometry(QRect(210, 360, 100, 32));
        UsernameInputRegister_2 = new QLineEdit(Register);
        UsernameInputRegister_2->setObjectName("UsernameInputRegister_2");
        UsernameInputRegister_2->setGeometry(QRect(100, 140, 113, 21));
        UsernameInputRegister_3 = new QLineEdit(Register);
        UsernameInputRegister_3->setObjectName("UsernameInputRegister_3");
        UsernameInputRegister_3->setGeometry(QRect(100, 80, 113, 21));
        groupBox = new QGroupBox(Register);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(240, 80, 120, 121));
        PatiRadButt = new QRadioButton(groupBox);
        PatiRadButt->setObjectName("PatiRadButt");
        PatiRadButt->setGeometry(QRect(10, 90, 99, 20));
        DocRadButt = new QRadioButton(groupBox);
        DocRadButt->setObjectName("DocRadButt");
        DocRadButt->setGeometry(QRect(10, 30, 99, 20));
        NurRadButt = new QRadioButton(groupBox);
        NurRadButt->setObjectName("NurRadButt");
        NurRadButt->setGeometry(QRect(10, 60, 99, 20));
        UsernameLabelRegister_2 = new QLabel(Register);
        UsernameLabelRegister_2->setObjectName("UsernameLabelRegister_2");
        UsernameLabelRegister_2->setGeometry(QRect(20, 140, 71, 16));
        UsernameLabelRegister_3 = new QLabel(Register);
        UsernameLabelRegister_3->setObjectName("UsernameLabelRegister_3");
        UsernameLabelRegister_3->setGeometry(QRect(20, 80, 71, 16));
        groupBox_2 = new QGroupBox(Register);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(380, 80, 120, 121));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(10, 30, 99, 20));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(10, 60, 99, 20));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(10, 90, 99, 20));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        UsernameLabelRegister->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        PasswordLabelRegister->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        FinishRegister->setText(QCoreApplication::translate("Register", "Finish", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Register", "Role", nullptr));
        PatiRadButt->setText(QCoreApplication::translate("Register", "Patient", nullptr));
        DocRadButt->setText(QCoreApplication::translate("Register", "Doctor", nullptr));
        NurRadButt->setText(QCoreApplication::translate("Register", "Nurse", nullptr));
        UsernameLabelRegister_2->setText(QCoreApplication::translate("Register", "Last Name:", nullptr));
        UsernameLabelRegister_3->setText(QCoreApplication::translate("Register", "First Name:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Register", "Gender", nullptr));
        radioButton->setText(QCoreApplication::translate("Register", "Male", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Register", "Woman", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Register", "Unknown", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
