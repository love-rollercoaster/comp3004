#include "patient.h"
#include <QDate>

Patient::Patient(string name, string health_card, QDate birthday, CareType care_received, CareType care_required, Facility f)
{
    this->name = name;
    this->health_card = health_card;
    this->birthday = birthday;
    this->care_received = care_received;
    this->care_required = care_required;
    this->admittedFacility = f;
    admission_date = QDate.currentDate();
    discharge_date = QDate();
}

QDate Patient::getAdmissionDate()
{
    return admission_date;
}

QDate Patient::getDischargeDate()
{
    return discharge_date;
}

string Patient::getName()
{
    return name;
}

string Patient::getHealthCard()
{
    return health_card;
}

QDate Patient::getBirthday()
{
    return birthday;
}

CareType Patient::getCare()
{
    return care_received;
}

CareType Patient::getRequiredCare()
{
    return care_required;
}

