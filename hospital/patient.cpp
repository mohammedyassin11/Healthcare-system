#include "patient.h"
#include "ui_patient.h"

Patient::Patient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Patient)
{
    ui->setupUi(this);
}

Patient::~Patient()
{
    delete ui;
}
