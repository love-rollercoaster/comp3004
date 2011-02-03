#include <QtGui/QApplication>
#include "loginform.h"
#include "createuserform.h"
#include "createfacilityform.h"
#include "removepatientfrombedform.h"
#include "generatereport.h"
#include "mapcontroller.h"
#include "facility.h"
#include "viewreportform.h"

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

    Facility *f1 = new Facility(QPointF(192, 314), 0, Facility::HOSPITAL);
    Facility *f2 = new Facility(QPointF(287, 316), 0, Facility::NURSING_HOME);
    Facility *f3 = new Facility(QPointF(316, 343), 0, Facility::NURSING_HOME);
    Facility *f4 = new Facility(QPointF(410, 260), 0, Facility::HOSPITAL);
    Facility *f5 = new Facility(QPointF(654, 406), 0, Facility::HOSPITAL);
    Facility *f6 = new Facility(QPointF(810, 361), 0, Facility::NURSING_HOME);
    Facility *f7 = new Facility(QPointF(474, 409), 0, Facility::HOSPITAL);

    MapController mapController;
    mapController.addFacility(f1);
    mapController.addFacility(f2);
    mapController.addFacility(f3);
    mapController.addFacility(f4);
    mapController.addFacility(f5);
    mapController.addFacility(f6);
    mapController.addFacility(f7);

    ViewReportForm viewReportForm;
    viewReportForm.show();

    return a.exec();
}
