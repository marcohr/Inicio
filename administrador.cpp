#include "administrador.h"
#include "ui_administrador.h"

Administrador::Administrador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Administrador)
{
    ui->setupUi(this);

    Dibujar *q=new Dibujar(this);
    q->setGeometry(ui->widget2->geometry());
    ui->gridLayout->addWidget(q);
}

Administrador::~Administrador()
{
    delete ui;
}
