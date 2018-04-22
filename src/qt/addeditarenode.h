#ifndef ADDEDITareNODE_H
#define ADDEDITareNODE_H

#include <QDialog>

namespace Ui {
class AddEditareNode;
}


class AddEditareNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditareNode(QWidget *parent = 0);
    ~AddEditareNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditareNode *ui;
};

#endif // ADDEDITareNODE_H
