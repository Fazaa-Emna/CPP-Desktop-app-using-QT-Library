#ifndef TYPESA_H
#define TYPESA_H

#include <QDialog>

namespace Ui {
class TypeSA;
}

class TypeSA : public QDialog
{
    Q_OBJECT

public:
    explicit TypeSA(QWidget *parent = nullptr);
    ~TypeSA();

private:
    Ui::TypeSA *ui;
};

#endif // TYPESA_H
