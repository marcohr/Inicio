#ifndef INSERTAR_H
#define INSERTAR_H

#include <QDialog>
#include "inicio.h"
#include "administrador.h"

namespace Ui {
class Insertar;
}

class Insertar : public QDialog
{
    Q_OBJECT

public:
    explicit Insertar(QWidget *parent = 0);
    ~Insertar();

private slots:
    void on_pushButton_2_clicked();

    void on_insertar_clicked();

private:
    Ui::Insertar *ui;
};

#endif // INSERTAR_H
