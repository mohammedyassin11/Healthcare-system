#ifndef PATIENT_H
#define PATIENT_H

#include <QDialog>

namespace Ui {
class Patient;
}

class Patient : public QDialog
{
    Q_OBJECT

public:
    explicit Patient(QWidget *parent = nullptr);
    ~Patient();

private slots:
    void on_bookpushButton_clicked();

    void on_DoctorName_activated(int index);

    void on_pushButton_2_clicked();

private:
    Ui::Patient *ui;
};

#endif // PATIENT_H
