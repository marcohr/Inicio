#ifndef INICIO_H
#define INICIO_H

#include <QMainWindow>
#include "insertar.h"
#include "crearcuenta.h"
namespace Ui {
class Inicio;
}

class Inicio : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inicio(QWidget *parent = 0);
    ~Inicio();

private slots:
    void on_BotonIngresar_clicked();

    void on_BotonCrear_clicked();

private:
    Ui::Inicio *ui;
};

#endif // INICIO_H
