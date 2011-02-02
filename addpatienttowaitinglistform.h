#ifndef ADDPATIENTTOWAITINGLISTFORM_H
#define ADDPATIENTTOWAITINGLISTFORM_H

#include <QDialog>

namespace Ui {
    class AddPatientToWaitingListForm;
}

class AddPatientToWaitingListForm : public QDialog
{
    Q_OBJECT

public:
    explicit AddPatientToWaitingListForm(QWidget *parent = 0);
    ~AddPatientToWaitingListForm();

private:
    Ui::AddPatientToWaitingListForm *ui;
};

#endif // ADDPATIENTTOWAITINGLISTFORM_H
