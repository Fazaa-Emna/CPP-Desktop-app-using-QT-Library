#include "types.h"
#include "ui_types.h"

Types::Types(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Types)
{
    ui->setupUi(this);
}

Types::~Types()
{
    delete ui;
}
