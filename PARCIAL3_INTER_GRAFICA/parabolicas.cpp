#include "mainwindow.h"
#include "parabolicas.h"
#include <QTimer>

parabolicas::parabolicas(int r_, int x, int y)
{
    r = r_;
    posx = x;
    posy = y;
    setPos(posx,posy);
    QTimer *t=new QTimer();
    //Conectamos la funcion movimiento al timer
    //connect(t,SIGNAL(timeout()),this,SLOT(movimiento()));
    t->start(50);
}

void parabolicas::setR(int radio)
{
    r = radio;
}

void parabolicas::setPosx(int px)
{
    posx=px;
}

void parabolicas::setPosy(int py)
{
    posy = py;
}

QRectF parabolicas::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void parabolicas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawEllipse(boundingRect());
}

//void parabolicas::borrar();
//{
    //if(posx>=x and posx<=x+23)delete this;
//}
void parabolicas::movimiento()
{
    //La bala realiza un Movimiento Parabolico, por lo que siempre tendra la misma velocidad en x
    //Pero en y no, aparte agregamos un yd, que es el que nos permite colocar las coordenadas bien
    //Debido a que en Qt el eje y esta invertido
    posx=posx+velx;
    posy=posy+vely-(9.8)/2;
    vely=vely-(9.8)/2;
    yd=2*y0-posy;
    setPos(int(posx),int(yd));
    //borrar();
}
