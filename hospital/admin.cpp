#include "admin.h"
#include "ui_admin.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>

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
    QFile file("/Users/asser/Desktop/hospital_lab/UserCred.txt");
    if (!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::information(0,"info",file.errorString());
    }

    QTextStream in(&file);

    ui->textEdit->setText(in.readAll());
}

void admin::on_pushButton_2_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open File", "/Users/asser/Desktop/hospital_lab/", "Text Files (*.txt)");
    if (fileName.isEmpty()) {
        QMessageBox::warning(this, "Error", "No file selected.");
        return;
    }

    QFile file(fileName);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open file.");
        return;
    }

    QTextStream out(&file);
    out << ui->textEdit->toPlainText();

    file.close();

    QMessageBox::information(this, "Success", "File saved successfully.");
}

void admin::on_pushButton_3_clicked()
{
    QFile file("/Users/asser/Desktop/hospital_lab/MedicRecords.txt");
    if (!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::information(0,"info",file.errorString());
    }

    QTextStream in(&file);

    ui->textEdit->setText(in.readAll());
}

