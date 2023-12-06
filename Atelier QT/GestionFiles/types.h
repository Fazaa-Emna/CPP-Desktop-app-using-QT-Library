#ifndef TYPES_H
#define TYPES_H

#include <QDialog>

namespace Ui {
class Types;
}

class Types : public QDialog
{
    Q_OBJECT

public:
    explicit Types(QWidget *parent = nullptr);
    ~Types();

private:
    Ui::Types *ui;
};

#endif // TYPES_H
