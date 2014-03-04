#include "insertar.h"
#include "ui_insertar.h"

Insertar::Insertar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Insertar)
{
    ui->setupUi(this);
}

Insertar::~Insertar()
{
    delete ui;
}

void Insertar::on_pushButton_2_clicked()
{
    Inicio *ini=new Inicio;
    ini->show();
    this->hide();
}

void Insertar::on_insertar_clicked()
{
    Administrador *adm=new Administrador();
    adm->show();
    this->hide();
}
