#ifndef DIBUJAR_H
#define DIBUJAR_H
#include <QWidget>
#include <qlist.h>

class Dibujar : public QWidget
{
public:
    void paintEvent(QPaintEvent * e);
    void mousePressEvent(QMouseEvent *e);
    Dibujar(QWidget *parent = 0);
    QList <QPoint>posicion;

};

#endif // DIBUJAR_H
