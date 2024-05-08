#ifndef MANAGEMENTSYSTEM_H
#define MANAGEMENTSYSTEM_H

#include <QString>
#include <QDateTime>

class ManagementSystem : public QObject
{
    Q_OBJECT

public:
    explicit ManagementSystem(QObject *parent = nullptr);

    // Function to validate login data
    bool validateLoginData(const QString &username, const QString &password);

    // Function to determine user role
    QString determineUserRole(const QString &username);

    // Function to schedule appointment
    void scheduleAppointment(const QString &username, const QDateTime &dateTime);

    // Function to view medical records
    QString viewMedicalRecords(const QString &username);
};

#endif // MANAGEMENTSYSTEM_H
