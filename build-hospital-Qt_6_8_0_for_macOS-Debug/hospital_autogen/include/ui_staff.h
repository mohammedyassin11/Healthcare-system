/********************************************************************************
** Form generated from reading UI file 'staff.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFF_H
#define UI_STAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Staff
{
public:
    QLabel *DoctorLogo;
    QLabel *Logo;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *Availability;
    QCheckBox *Sun;
    QCheckBox *Mon;
    QCheckBox *Tues;
    QCheckBox *Wed;
    QCheckBox *Thurs;
    QLineEdit *TiminglineEdit;
    QLabel *TimingLabel;
    QPushButton *SavepushButton;
    QGroupBox *MedRecgroupBox_2;
    QLabel *ParientLabel;
    QComboBox *PatientName;
    QLabel *PrescriptionLabel;
    QLineEdit *PrescriptionLineEdit_2;
    QPushButton *SavepushButton_2;
    QPushButton *returntoLogin;

    void setupUi(QDialog *Staff)
    {
        if (Staff->objectName().isEmpty())
            Staff->setObjectName("Staff");
        Staff->resize(745, 532);
        DoctorLogo = new QLabel(Staff);
        DoctorLogo->setObjectName("DoctorLogo");
        DoctorLogo->setGeometry(QRect(10, 10, 81, 61));
        Logo = new QLabel(Staff);
        Logo->setObjectName("Logo");
        Logo->setGeometry(QRect(10, 90, 221, 191));
        label = new QLabel(Staff);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 10, 58, 16));
        label_2 = new QLabel(Staff);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 10, 81, 16));
        Availability = new QGroupBox(Staff);
        Availability->setObjectName("Availability");
        Availability->setGeometry(QRect(140, 100, 221, 261));
        Sun = new QCheckBox(Availability);
        Sun->setObjectName("Sun");
        Sun->setGeometry(QRect(20, 30, 85, 20));
        Mon = new QCheckBox(Availability);
        Mon->setObjectName("Mon");
        Mon->setGeometry(QRect(20, 70, 85, 20));
        Tues = new QCheckBox(Availability);
        Tues->setObjectName("Tues");
        Tues->setGeometry(QRect(20, 110, 85, 20));
        Wed = new QCheckBox(Availability);
        Wed->setObjectName("Wed");
        Wed->setGeometry(QRect(120, 30, 85, 20));
        Thurs = new QCheckBox(Availability);
        Thurs->setObjectName("Thurs");
        Thurs->setGeometry(QRect(120, 70, 85, 20));
        TiminglineEdit = new QLineEdit(Availability);
        TiminglineEdit->setObjectName("TiminglineEdit");
        TiminglineEdit->setGeometry(QRect(70, 140, 151, 71));
        TimingLabel = new QLabel(Availability);
        TimingLabel->setObjectName("TimingLabel");
        TimingLabel->setGeometry(QRect(10, 160, 58, 16));
        SavepushButton = new QPushButton(Availability);
        SavepushButton->setObjectName("SavepushButton");
        SavepushButton->setGeometry(QRect(60, 220, 100, 32));
        MedRecgroupBox_2 = new QGroupBox(Staff);
        MedRecgroupBox_2->setObjectName("MedRecgroupBox_2");
        MedRecgroupBox_2->setGeometry(QRect(400, 100, 211, 261));
        ParientLabel = new QLabel(MedRecgroupBox_2);
        ParientLabel->setObjectName("ParientLabel");
        ParientLabel->setGeometry(QRect(10, 30, 58, 16));
        PatientName = new QComboBox(MedRecgroupBox_2);
        PatientName->setObjectName("PatientName");
        PatientName->setGeometry(QRect(60, 20, 121, 41));
        PrescriptionLabel = new QLabel(MedRecgroupBox_2);
        PrescriptionLabel->setObjectName("PrescriptionLabel");
        PrescriptionLabel->setGeometry(QRect(10, 70, 81, 16));
        PrescriptionLineEdit_2 = new QLineEdit(MedRecgroupBox_2);
        PrescriptionLineEdit_2->setObjectName("PrescriptionLineEdit_2");
        PrescriptionLineEdit_2->setGeometry(QRect(10, 100, 181, 111));
        SavepushButton_2 = new QPushButton(MedRecgroupBox_2);
        SavepushButton_2->setObjectName("SavepushButton_2");
        SavepushButton_2->setGeometry(QRect(50, 220, 100, 32));
        returntoLogin = new QPushButton(Staff);
        returntoLogin->setObjectName("returntoLogin");
        returntoLogin->setGeometry(QRect(40, 460, 161, 61));

        retranslateUi(Staff);

        QMetaObject::connectSlotsByName(Staff);
    } // setupUi

    void retranslateUi(QDialog *Staff)
    {
        Staff->setWindowTitle(QCoreApplication::translate("Staff", "Dialog", nullptr));
        DoctorLogo->setText(QString());
        Logo->setText(QString());
        label->setText(QCoreApplication::translate("Staff", "Welcome", nullptr));
        label_2->setText(QString());
        Availability->setTitle(QCoreApplication::translate("Staff", "Availability ", nullptr));
        Sun->setText(QCoreApplication::translate("Staff", "Sun", nullptr));
        Mon->setText(QCoreApplication::translate("Staff", "Mon", nullptr));
        Tues->setText(QCoreApplication::translate("Staff", "Tues", nullptr));
        Wed->setText(QCoreApplication::translate("Staff", "Wed", nullptr));
        Thurs->setText(QCoreApplication::translate("Staff", "Thurs", nullptr));
        TimingLabel->setText(QCoreApplication::translate("Staff", "Timing:", nullptr));
        SavepushButton->setText(QCoreApplication::translate("Staff", "Save", nullptr));
        MedRecgroupBox_2->setTitle(QCoreApplication::translate("Staff", "Medical Record", nullptr));
        ParientLabel->setText(QCoreApplication::translate("Staff", "Patient", nullptr));
        PrescriptionLabel->setText(QCoreApplication::translate("Staff", "Prescription", nullptr));
        SavepushButton_2->setText(QCoreApplication::translate("Staff", "Save", nullptr));
        returntoLogin->setText(QCoreApplication::translate("Staff", "return to login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Staff: public Ui_Staff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFF_H
