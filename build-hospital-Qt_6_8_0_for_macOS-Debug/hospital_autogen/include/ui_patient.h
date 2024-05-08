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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Patient
{
public:
    QGroupBox *TimeofAppointment;
    QComboBox *AvailableDay;
    QComboBox *AvailableTime;
    QLabel *Timelabel;
    QLabel *Daylabel;
    QGroupBox *DoctorBox;
    QComboBox *DoctorName;
    QGroupBox *SymptomsBox;
    QLineEdit *SymptomslineEdit;
    QLabel *InstructionsLabel;
    QPushButton *pushButton;
    QLabel *WelcomeLabel;
    QLabel *NameLabel;
    QLabel *Excalamationlabel;
    QLabel *ProfilePic;
    QLabel *Logo;

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
        DoctorBox = new QGroupBox(Patient);
        DoctorBox->setObjectName("DoctorBox");
        DoctorBox->setGeometry(QRect(480, 100, 131, 61));
        DoctorName = new QComboBox(DoctorBox);
        DoctorName->setObjectName("DoctorName");
        DoctorName->setGeometry(QRect(0, 27, 131, 31));
        SymptomsBox = new QGroupBox(Patient);
        SymptomsBox->setObjectName("SymptomsBox");
        SymptomsBox->setGeometry(QRect(480, 280, 221, 171));
        SymptomslineEdit = new QLineEdit(SymptomsBox);
        SymptomslineEdit->setObjectName("SymptomslineEdit");
        SymptomslineEdit->setGeometry(QRect(0, 20, 221, 151));
        InstructionsLabel = new QLabel(Patient);
        InstructionsLabel->setObjectName("InstructionsLabel");
        InstructionsLabel->setGeometry(QRect(480, 40, 251, 41));
        pushButton = new QPushButton(Patient);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 540, 221, 71));
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
        Logo = new QLabel(Patient);
        Logo->setObjectName("Logo");
        Logo->setGeometry(QRect(30, 90, 431, 381));

        retranslateUi(Patient);

        QMetaObject::connectSlotsByName(Patient);
    } // setupUi

    void retranslateUi(QDialog *Patient)
    {
        Patient->setWindowTitle(QCoreApplication::translate("Patient", "Dialog", nullptr));
        TimeofAppointment->setTitle(QCoreApplication::translate("Patient", "Time of Appointment", nullptr));
        Timelabel->setText(QCoreApplication::translate("Patient", "Time", nullptr));
        Daylabel->setText(QCoreApplication::translate("Patient", "Day", nullptr));
        DoctorBox->setTitle(QCoreApplication::translate("Patient", "Name of Doctor", nullptr));
        SymptomsBox->setTitle(QCoreApplication::translate("Patient", "Symptoms", nullptr));
        InstructionsLabel->setText(QCoreApplication::translate("Patient", "Book your Appointment:", nullptr));
        pushButton->setText(QCoreApplication::translate("Patient", "View Medical Records", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("Patient", "Welcome back ", nullptr));
        NameLabel->setText(QString());
        Excalamationlabel->setText(QCoreApplication::translate("Patient", "!", nullptr));
        ProfilePic->setText(QString());
        Logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Patient: public Ui_Patient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENT_H
