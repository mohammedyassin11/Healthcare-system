/********************************************************************************
** Form generated from reading UI file 'patient.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENT_H
#define UI_PATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Patient
{
public:
    QGroupBox *TimeofAppointment;
    QComboBox *AvailableDay;
    QComboBox *AvailableTime;
    QLabel *Timelabel;
    QLabel *Daylabel;
    QLabel *InstructionsLabel;
    QPushButton *pushButton;
    QLabel *WelcomeLabel;
    QLabel *NameLabel;
    QLabel *Excalamationlabel;
    QLabel *ProfilePic;
    QTextBrowser *textBrowser;
    QPushButton *bookpushButton;
    QPushButton *pushButton_2;
    QComboBox *DoctorName;

    void setupUi(QDialog *Patient)
    {
        if (Patient->objectName().isEmpty())
            Patient->setObjectName("Patient");
        Patient->resize(825, 642);
        TimeofAppointment = new QGroupBox(Patient);
        TimeofAppointment->setObjectName("TimeofAppointment");
        TimeofAppointment->setGeometry(QRect(480, 170, 211, 101));
        AvailableDay = new QComboBox(TimeofAppointment);
        AvailableDay->setObjectName("AvailableDay");
        AvailableDay->setGeometry(QRect(110, 30, 82, 28));
        AvailableTime = new QComboBox(TimeofAppointment);
        AvailableTime->setObjectName("AvailableTime");
        AvailableTime->setGeometry(QRect(110, 70, 81, 28));
        Timelabel = new QLabel(TimeofAppointment);
        Timelabel->setObjectName("Timelabel");
        Timelabel->setGeometry(QRect(10, 70, 63, 20));
        Daylabel = new QLabel(TimeofAppointment);
        Daylabel->setObjectName("Daylabel");
        Daylabel->setGeometry(QRect(10, 40, 63, 20));
        InstructionsLabel = new QLabel(Patient);
        InstructionsLabel->setObjectName("InstructionsLabel");
        InstructionsLabel->setGeometry(QRect(480, 40, 251, 41));
        pushButton = new QPushButton(Patient);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 460, 221, 71));
        WelcomeLabel = new QLabel(Patient);
        WelcomeLabel->setObjectName("WelcomeLabel");
        WelcomeLabel->setGeometry(QRect(190, 10, 101, 31));
        NameLabel = new QLabel(Patient);
        NameLabel->setObjectName("NameLabel");
        NameLabel->setGeometry(QRect(300, 10, 71, 31));
        Excalamationlabel = new QLabel(Patient);
        Excalamationlabel->setObjectName("Excalamationlabel");
        Excalamationlabel->setGeometry(QRect(380, 10, 63, 31));
        ProfilePic = new QLabel(Patient);
        ProfilePic->setObjectName("ProfilePic");
        ProfilePic->setGeometry(QRect(10, 10, 111, 61));
        textBrowser = new QTextBrowser(Patient);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(60, 100, 321, 291));
        bookpushButton = new QPushButton(Patient);
        bookpushButton->setObjectName("bookpushButton");
        bookpushButton->setGeometry(QRect(480, 480, 100, 32));
        pushButton_2 = new QPushButton(Patient);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 570, 151, 51));
        DoctorName = new QComboBox(Patient);
        DoctorName->setObjectName("DoctorName");
        DoctorName->setGeometry(QRect(480, 120, 131, 31));

        retranslateUi(Patient);

        QMetaObject::connectSlotsByName(Patient);
    } // setupUi

    void retranslateUi(QDialog *Patient)
    {
        Patient->setWindowTitle(QCoreApplication::translate("Patient", "Dialog", nullptr));
        TimeofAppointment->setTitle(QCoreApplication::translate("Patient", "Time of Appointment", nullptr));
        Timelabel->setText(QCoreApplication::translate("Patient", "Time", nullptr));
        Daylabel->setText(QCoreApplication::translate("Patient", "Day", nullptr));
        InstructionsLabel->setText(QCoreApplication::translate("Patient", "Book your Appointment:", nullptr));
        pushButton->setText(QCoreApplication::translate("Patient", "View Medical Records", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("Patient", "Welcome back ", nullptr));
        NameLabel->setText(QString());
        Excalamationlabel->setText(QCoreApplication::translate("Patient", "!", nullptr));
        ProfilePic->setText(QString());
        bookpushButton->setText(QCoreApplication::translate("Patient", "Book", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Patient", "Return to Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Patient: public Ui_Patient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENT_H
