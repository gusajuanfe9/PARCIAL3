#include "caidas.h"

caidas::caidas(int r_, int x, int y)
{
    r = r_;
    posx = x;
    posy = y;
    setPos(posx,posy);
    QTimer *t=new QTimer();
    connect(t,SIGNAL(timeout()),this,SLOT(movimiento()));
    t->start(50);
}

void caidas::setR(int radio)
{
    r = radio;
}

void caidas::setPosx(int px)
{
    posx=px;
}

void caidas::setPosy(int py)
{
    posy = py;
}

QRectF caidas::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void caidas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->drawEllipse(boundingRect());
}

void caidas::borrar(int x, int y)
{
    if(posx>=x and posx<=x+23)delete this;
}
void caidas::movimiento()
{
    posy=posy+vely-(9.8)/2;
    vely=vely-(9.8)/2;
    yd=2*y0-posy;
    setPos(int(posx),int(yd));
}
