#ifndef PATIENT_H
#define PATIENT_H
#include "care.h"
#include <string>
using std::string;

class Facility;

class Patient
{
public:
    Patient(string name, string health_card, QDate birthday, CareType care_received, CareType care_required, Facility f);
    QDate getAdmissionDate();
    QDate getDischargeDate();
    string getName();
    string getHealthCard();
    QDate getBirthday();
    CareType getCare();
    CareType getRequiredCare();

private:
    string name;
    string health_card;
    QDate admission_date;
    QDate discharge_date;
    QDate birthday;
    CareType care_received;
    CareType care_required;
    Facility admittedFacility;
};

#endif // PATIENT_H
