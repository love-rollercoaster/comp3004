#include <QtGui/QApplication>
#include "loginform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginForm loginForm;
    loginForm.show();

    return a.exec();
}
