#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include <QString>

class UserController
{
public:
    UserController();

    static bool CheckLogin(const QString username, const QString password);

};

#endif // USERCONTROLLER_H
