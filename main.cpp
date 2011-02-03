#include <QtGui/QApplication>
#include "loginform.h"
#include "createuserform.h"
#include "createfacilityform.h"
#include "removepatientfrombedform.h"
#include "generatereport.h"
#include "mapcontroller.h"
#include "facility.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginForm loginForm;
    loginForm.show();

    CreateUserForm createUserForm;
    createUserForm.show();

    CreateFacilityForm createFacilityForm;
    createFacilityForm.show();

    RemovePatientFromBedForm r;
    r.show();

    GenerateReport g;
    g.show();

    Facility *f1 = new Facility(QPointF(150, 205), 0, Facility::HOSPITAL);
    Facility *f2 = new Facility(QPointF(265, 35), 0, Facility::NURSING_HOME);
    Facility *f3 = new Facility(QPointF(290, 120), 0, Facility::NURSING_HOME);
    Facility *f4 = new Facility(QPointF(210, 220), 0, Facility::HOSPITAL);

    MapController mapController;
    mapController.addFacility(f1);
    mapController.addFacility(f2);
    mapController.addFacility(f3);
    mapController.addFacility(f4);


    return a.exec();
}
