#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

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
    QString name[] = {"admin"};
    QString password[] = {"admin123"};

    QString uName = ui->UsernameInput->text();
    QString uPassword = ui->PasswordInput->text();

    bool found;

    for(int i = 0; i < name->length(); i++)
    {
        if (uName == name[i] && uPassword == password[i])
        {
            QMessageBox::information(this,"Welcome Message", "User: " + name[i] + "\n" "\n" "Welcome to Cleopatra Hospital");

            found = true;
            break;
        }

        if (!found)
        {
            QMessageBox::information(this,"Error Box", "\n" "Error: Incorrect Username or password");

            break;
        }
    }
}


void MainWindow::on_RegisterButton_clicked()
{
    this->hide();

    Register R3gister;
    R3gister.isVisible();
    R3gister.exec();

}

