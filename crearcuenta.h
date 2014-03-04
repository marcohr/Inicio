#ifndef CREARCUENTA_H
#define CREARCUENTA_H

#include <QDialog>
#include "inicio.h"

namespace Ui {
class CrearCuenta;
}

class CrearCuenta : public QDialog
{
    Q_OBJECT

public:
    explicit CrearCuenta(QWidget *parent = 0);
    ~CrearCuenta();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CrearCuenta *ui;
};

#endif // CREARCUENTA_H
