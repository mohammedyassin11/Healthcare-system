#include "staff.h"
#include "ui_staff.h"
#include <QFile>

Staff::Staff(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Staff)
{
    ui->setupUi(this);

    QPixmap pic("/Users/asser/Desktop/hospital_lab/DocProfile.jpeg");
    QPixmap neopic = pic.scaled(81,61, Qt::KeepAspectRatio);
    ui->DoctorLogo->setPixmap(neopic);
}

Staff::~Staff()
{
    delete ui;
}

void Staff::on_SavepushButton_clicked()
{
    QFile file("/Users/asser/Desktop/hospital_lab/availability.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        qDebug() << "Could not open file for writing";
        return;
    }

    QTextStream out(&file);

    // Assuming that you have QCheckBox widgets named ui->checkBoxMonday, ui->checkBoxTuesday, etc.
    // Replace these names with the actual names of your QCheckBox widgets.
    QList<QCheckBox*> checkBoxes = {
        ui->Sun,
        ui->Mon,
        ui->Tues,
        ui->Wed,
        ui->Thurs,

    };

    QStringList selectedDays;
    for (QCheckBox* checkBox : checkBoxes)
    {
        if (checkBox->isChecked())
        {
            selectedDays << checkBox->text();
        }
    }

    for (const QString& day : selectedDays) {
        out << day << ",";
    }

    file.close();


}


void Staff::on_returntoLogin_clicked()
{
    this->hide();
}

