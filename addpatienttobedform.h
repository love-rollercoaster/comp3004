#ifndef ADDPATIENTTOBEDFORM_H
#define ADDPATIENTTOBEDFORM_H

#include <QDialog>

namespace Ui {
    class AddPatientToBedForm;
}

class AddPatientToBedForm : public QDialog
{
    Q_OBJECT

public:
    explicit AddPatientToBedForm(QWidget *parent = 0);
    ~AddPatientToBedForm();

private:
    Ui::AddPatientToBedForm *ui;
};

#endif // ADDPATIENTTOBEDFORM_H
