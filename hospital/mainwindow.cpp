#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pic("/Users/asser/Desktop/hospital_lab/logo.jpeg");
    ui->PixmapLabel->setPixmap(pic);

    connect(ui->LoginButton, SIGNAL(clicked()), this, SLOT(LoginButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::LoginButton_clicked()
{
    QString username = ui->UsernameInput->text();
    QString password = ui->PasswordInput->text();

    QFile file("/Users/asser/Desktop/hospital_lab/UserCred.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    bool userFound = false;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(',');

        // Extract username and password from the line
        if (parts.size() == 6) {
            QString fileUsername = parts[2].trimmed();
            QString filePassword = parts[3].trimmed();
            QString STATUS = parts[5].trimmed();

            // Check if the username matches
            if (fileUsername == username) {
                userFound = true;
                // Check if the password matches
                if (filePassword == password) {
                    // Password matches
                    // Do something, for example, show a success message
                    // and hide the registration window
                    QMessageBox::information(this, "Success", "Login successful!");

                    if (STATUS == "admin")
                    {
                        this->hide();

                        admin ADMIN;
                        ADMIN.isVisible();
                        ADMIN.exec();
                    }

                    return;
                } else {
                    // Password does not match
                    // Show an error message
                    QMessageBox::critical(this, "Error", "Incorrect password!");
                    return;
                }
            }
        }
    }

    // If the loop completes and the username is not found
    if (!userFound) {
        // Show an error message
        QMessageBox::critical(this, "Error", "Username not found!");
    }
}


void MainWindow::on_RegisterButton_clicked()
{
    this->hide();

    Register R3gister;
    R3gister.isVisible();
    R3gister.exec();
    this->show();

}

