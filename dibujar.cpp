#include "dibujar.h"
#include <QPainter>
#include <QMouseEvent>
#include <qdebug.h>

Dibujar::Dibujar(QWidget *parent) :
    QWidget(parent)
{
}

void Dibujar::paintEvent(QPaintEvent * e){

    QPainter z(this);
    QPixmap c(":/imagenes/imagenes/mapa.png");
    z.drawPixmap(0,0,881,601,c);

    for(int i=0;i<posicion.count();i++){


        z.setPen(Qt::black);
        z.setBrush(Qt::red);
        z.drawEllipse(posicion.at(i),10,10);
   }


}

void Dibujar::mousePressEvent(QMouseEvent *e){

    posicion.append(e->pos());
    update();


}
