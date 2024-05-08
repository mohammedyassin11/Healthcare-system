#include "admin.h"
#include "ui_admin.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);

    // Set up your UI, such as setting the logo and font
    QPixmap pix("/Users/asser/Desktop/hospital_lab/logo2.jpeg");
    QPixmap neopix = pix.scaled(401,131, Qt::KeepAspectRatio);
    ui->PixmapCleo->setPixmap(neopix);

    QFont font = ui->label->font();
    font.setPointSize(38);
    ui->label->setFont(font);
}

admin::~admin()
{
    delete ui;
}

void admin::on_pushButton_clicked()
{
    // Open the medical records text file
    QFile file("/path/to/medical_records.txt"); // Replace "/path/to/medical_records.txt" with the actual path to your medical records text file
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open medical records file.");
        return;
    }

    // Read the contents of the file
    QTextStream in(&file);
    QString contents = in.readAll();

    // Display the contents in a message box or perform other operations
    QMessageBox::information(this, "Medical Records", contents);

    file.close();
}

void admin::on_pushButton_2_clicked()
{
    // Open the user credentials text file
    QFile file("/path/to/user_credentials.txt"); // Replace "/path/to/user_credentials.txt" with the actual path to your user credentials text file
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open user credentials file.");
        return;
    }

    // Read the contents of the file
    QTextStream in(&file);
    QString contents = in.readAll();

    // Display the contents in a message box or perform other operations
    QMessageBox::information(this, "User Credentials", contents);

    file.close();
}
