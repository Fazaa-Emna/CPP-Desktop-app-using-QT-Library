#include "adminconnection.h"
#include "ui_adminconnection.h"

AdminConnection::AdminConnection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminConnection)
{
    ui->setupUi(this);
}

AdminConnection::~AdminConnection()
{
    delete ui;
}
