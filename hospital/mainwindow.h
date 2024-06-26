#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include "register.h"
#include "admin.h"
#include "patient.h"
#include "staff.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void LoginButton_clicked();

    void on_RegisterButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
