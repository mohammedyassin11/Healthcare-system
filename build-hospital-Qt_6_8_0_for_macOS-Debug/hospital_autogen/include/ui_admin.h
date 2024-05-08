/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *PixmapCleo;
    QLabel *label;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(627, 496);
        pushButton = new QPushButton(admin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 360, 171, 51));
        pushButton_2 = new QPushButton(admin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 360, 171, 51));
        PixmapCleo = new QLabel(admin);
        PixmapCleo->setObjectName("PixmapCleo");
        PixmapCleo->setGeometry(QRect(110, 140, 401, 131));
        label = new QLabel(admin);
        label->setObjectName("label");
        label->setGeometry(QRect(107, 36, 401, 51));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "Edit User Credentials.", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin", "Edit Medical Records.", nullptr));
        PixmapCleo->setText(QString());
        label->setText(QCoreApplication::translate("admin", "Welcome back admin!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
