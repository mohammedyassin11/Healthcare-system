#include "patient.h"
#include "ui_patient.h"
#include <QFile>

Patient::Patient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Patient)
{
    ui->setupUi(this);

    connect(ui->DoctorName, SIGNAL(activated(int)), this, SLOT(on_DoctorName_activated(int)));

    QPixmap pic("/Users/asser/Desktop/hospital_lab/PatiProfile.jpeg");
    QPixmap neopic = pic.scaled(111,61, Qt::KeepAspectRatio);
    ui->ProfilePic->setPixmap(neopic);

    QFile file("/Users/asser/Desktop/hospital_lab/availability.txt"); // the actual file path
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Could not open file for reading";
        return;
    }

    QTextStream in(&file);

    // Read the file line by line
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (!line.isEmpty()) {
            // Split the line into words
            QStringList words = line.split(" ");


            if (words.size() >= 2) {
                QString item = words[0] + " " + words[1];
                ui->DoctorName->addItem(item);
            }
        }
    }


    file.close();
}



Patient::~Patient()
{
    delete ui;
}

void Patient::on_bookpushButton_clicked()
{


}



void Patient::on_DoctorName_activated(int index)
{
    Q_UNUSED(index); // To avoid compiler warnings about unused parameter
    ui->DoctorName->showPopup();
}


void Patient::on_pushButton_2_clicked()
{
    this->hide();
}

