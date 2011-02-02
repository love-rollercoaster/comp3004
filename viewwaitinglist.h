#ifndef VIEWWAITINGLIST_H
#define VIEWWAITINGLIST_H

#include <QDialog>

namespace Ui {
    class ViewWaitingList;
}

class ViewWaitingList : public QDialog
{
    Q_OBJECT

public:
    explicit ViewWaitingList(QWidget *parent = 0);
    ~ViewWaitingList();

private:
    Ui::ViewWaitingList *ui;
};

#endif // VIEWWAITINGLIST_H
