#ifndef areNODECONFIGDIALOG_H
#define areNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class areNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class areNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit areNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:28666", QString privkey="MASTERNODEPRIVKEY");
    ~areNodeConfigDialog();

private:
    Ui::areNodeConfigDialog *ui;
};

#endif // areNODECONFIGDIALOG_H
