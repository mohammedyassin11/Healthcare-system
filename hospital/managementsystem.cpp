#include "ManagementSystem.h"

#include <QFile>
#include <QTextStream>
#include <QDateTime>

ManagementSystem::ManagementSystem(QObject *parent) : QObject(parent)
{

}

bool ManagementSystem::validateLoginData(const QString &username, const QString &password)
{
    // Assuming user data is stored in a text file "user_credentials.txt" in format: "username password role"
    QFile file("user_credentials.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(" ");
        if (parts.size() == 3 && parts[0] == username && parts[1] == password) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}

QString ManagementSystem::determineUserRole(const QString &username)
{
    // Assuming user roles are stored in a text file "user_credentials.txt" in format: "username password role"
    QFile file("user_credentials.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return "";

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(" ");
        if (parts.size() == 3 && parts[0] == username) {
            file.close();
            return parts[2];
        }
    }
    file.close();
    return "";
}

void ManagementSystem::scheduleAppointment(const QString &username, const QDateTime &dateTime)
{
    // Assuming appointments are stored in a text file "appointments.txt" in format: "username date_time"
    QFile file("appointments.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
        return;

    QTextStream out(&file);
    out << username << " " << dateTime.toString() << "\n";
    file.close();
}

QString ManagementSystem::viewMedicalRecords(const QString &username)
{
    // Assuming medical records are stored in a text file "medical_records.txt" in format: "username medical_records"
    QFile file("medical_records.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return "";

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(" ");
        if (parts.size() == 2 && parts[0] == username) {
            file.close();
            return parts[1];
        }
    }
    file.close();
    return "";
}
