#include "inicio.h"
#include "ui_inicio.h"

Inicio::Inicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inicio)
{
    ui->setupUi(this);
}

Inicio::~Inicio()
{
    delete ui;
}

void Inicio::on_BotonIngresar_clicked()
{
   Insertar *inser=new Insertar;
   inser->show();
   this->hide();
}

void Inicio::on_BotonCrear_clicked()
{
    CrearCuenta *crear=new CrearCuenta;
    crear->show();
    this->hide();
}
