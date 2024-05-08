#include "register.h"
#include "ui_register.h"
#include <QFile>

Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_FinishRegister_clicked()
{
    // Retrieve values from line edits and radio button
    QString FirstName = ui->FirstnameInputRegister->text();
    QString LastName =ui->LastnameInputRegister->text();
    QString username = ui->UsernameInputRegister->text();
    QString password = ui->PasswordInputRegister->text();
    bool isMale = ui->MaleButton->isChecked();    // Assuming the radio button for male is named radioButtonMale

    QString status;

    if (ui->DocRadButt->isChecked())
    {
        status = "Doctor";
    }
    else if (ui->NurRadButt->isChecked())
    {
        status = "Nurse";
    }
    else if (ui->PatiRadButt->isChecked())
    {
        status = "Patient";
    }

    // Open the existing text file for appending

    QFile file ("/Users/asser/Desktop/hospital_lab/UserCred.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
        return;

    // Write values to the text file
    QTextStream out(&file);
    out << FirstName << ",";
    out << LastName << ",";
    out << username << ",";
    out << password << ",";
    out << (isMale ? "Male" : "Female") << ",";
    out << status << "\n";


    // Close the text file
    file.close();

    this->hide();
}

