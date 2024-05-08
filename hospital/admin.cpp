#include "admin.h"
#include "ui_admin.h"
#include <QFile>
#include <QTextStream>
#include <QFont>

admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);

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

}

