#include "typesa.h"
#include "ui_typesa.h"

TypeSA::TypeSA(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TypeSA)
{
    ui->setupUi(this);
}

TypeSA::~TypeSA()
{
    delete ui;
}
