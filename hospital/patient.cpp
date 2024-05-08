#include "patient.h"
#include "ui_patient.h"

Patient::Patient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Patient)
{
    ui->setupUi(this);

    QPixmap pic("/Users/asser/Desktop/hospital_lab/PatiProfile.jpeg");
    QPixmap neopic = pic.scaled(111,61, Qt::KeepAspectRatio);
    ui->ProfilePic->setPixmap(neopic);
}

Patient::~Patient()
{
    delete ui;
}
