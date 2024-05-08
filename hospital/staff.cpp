#include "staff.h"
#include "ui_staff.h"

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
