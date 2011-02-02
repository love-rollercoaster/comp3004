#include <QtGui/QApplication>
#include "loginform.h"
#include "createuserform.h"
#include "createfacilityform.h"
#include "removepatientfrombedform.h"

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

    return a.exec();
}
