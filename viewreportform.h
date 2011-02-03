#ifndef VIEWREPORTFORM_H
#define VIEWREPORTFORM_H

#include <QDialog>

namespace Ui {
    class ViewReportForm;
}

class ViewReportForm : public QDialog
{
    Q_OBJECT

public:
    explicit ViewReportForm(QWidget *parent = 0);
    ~ViewReportForm();

private:
    Ui::ViewReportForm *ui;
};

#endif // VIEWREPORTFORM_H
