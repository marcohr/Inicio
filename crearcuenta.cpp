#include "crearcuenta.h"
#include "ui_crearcuenta.h"

CrearCuenta::CrearCuenta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CrearCuenta)
{
    ui->setupUi(this);
}

CrearCuenta::~CrearCuenta()
{
    delete ui;
}

void CrearCuenta::on_pushButton_clicked()
{
    Inicio *ini=new Inicio;
    ini->show();
    this->hide();
}
