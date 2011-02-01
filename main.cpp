#include <QtGui/QApplication>
#include "loginform.h"
#include "createuserform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginForm loginForm;
    loginForm.show();

    CreateUserForm createUserForm;
    createUserForm.show();

    return a.exec();
}
