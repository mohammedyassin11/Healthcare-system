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
    QLineEdit *PasswordInputRegister;
    QLabel *UsernameLabelRegister;
    QLabel *PasswordLabelRegister;
    QPushButton *FinishRegister;
    QLineEdit *LastnameInputRegister;
    QLineEdit *FirstnameInputRegister;
    QGroupBox *groupBox;
    QRadioButton *PatiRadButt;
    QRadioButton *DocRadButt;
    QRadioButton *NurRadButt;
    QLabel *LastnameLabelRegister;
    QLabel *FirstnameLabelRegister;
    QGroupBox *groupBox_2;
    QRadioButton *MaleButton;
    QRadioButton *FemaleButton;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(522, 478);
        UsernameInputRegister = new QLineEdit(Register);
        UsernameInputRegister->setObjectName("UsernameInputRegister");
        UsernameInputRegister->setGeometry(QRect(100, 200, 113, 21));
        PasswordInputRegister = new QLineEdit(Register);
        PasswordInputRegister->setObjectName("PasswordInputRegister");
        PasswordInputRegister->setGeometry(QRect(100, 260, 113, 21));
        PasswordInputRegister->setEchoMode(QLineEdit::Password);
        UsernameLabelRegister = new QLabel(Register);
        UsernameLabelRegister->setObjectName("UsernameLabelRegister");
        UsernameLabelRegister->setGeometry(QRect(20, 200, 71, 16));
        PasswordLabelRegister = new QLabel(Register);
        PasswordLabelRegister->setObjectName("PasswordLabelRegister");
        PasswordLabelRegister->setGeometry(QRect(20, 260, 61, 20));
        FinishRegister = new QPushButton(Register);
        FinishRegister->setObjectName("FinishRegister");
        FinishRegister->setGeometry(QRect(210, 360, 100, 32));
        LastnameInputRegister = new QLineEdit(Register);
        LastnameInputRegister->setObjectName("LastnameInputRegister");
        LastnameInputRegister->setGeometry(QRect(100, 140, 113, 21));
        FirstnameInputRegister = new QLineEdit(Register);
        FirstnameInputRegister->setObjectName("FirstnameInputRegister");
        FirstnameInputRegister->setGeometry(QRect(100, 80, 113, 21));
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
        LastnameLabelRegister = new QLabel(Register);
        LastnameLabelRegister->setObjectName("LastnameLabelRegister");
        LastnameLabelRegister->setGeometry(QRect(20, 140, 71, 16));
        FirstnameLabelRegister = new QLabel(Register);
        FirstnameLabelRegister->setObjectName("FirstnameLabelRegister");
        FirstnameLabelRegister->setGeometry(QRect(20, 80, 71, 16));
        groupBox_2 = new QGroupBox(Register);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(380, 80, 120, 121));
        MaleButton = new QRadioButton(groupBox_2);
        MaleButton->setObjectName("MaleButton");
        MaleButton->setGeometry(QRect(10, 30, 99, 20));
        FemaleButton = new QRadioButton(groupBox_2);
        FemaleButton->setObjectName("FemaleButton");
        FemaleButton->setGeometry(QRect(10, 90, 99, 20));

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
        LastnameLabelRegister->setText(QCoreApplication::translate("Register", "Last Name:", nullptr));
        FirstnameLabelRegister->setText(QCoreApplication::translate("Register", "First Name:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Register", "Gender", nullptr));
        MaleButton->setText(QCoreApplication::translate("Register", "Male", nullptr));
        FemaleButton->setText(QCoreApplication::translate("Register", "Female", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
