#ifndef ADMINCONNECTION_H
#define ADMINCONNECTION_H

#include <QDialog>

namespace Ui {
class AdminConnection;
}

class AdminConnection : public QDialog
{
    Q_OBJECT

public:
    explicit AdminConnection(QWidget *parent = nullptr);
    ~AdminConnection();

private:
    Ui::AdminConnection *ui;
};

#endif // ADMINCONNECTION_H
