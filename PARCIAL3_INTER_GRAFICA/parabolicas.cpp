#include "parabolicas.h"

parabolicas::parabolicas(int r_, int x, int y)
{
    r = r_;
    posx = x;
    posy = y;
    setPos(posx,posy);
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
    painter->setBrush(Qt::white);
    painter->drawEllipse(boundingRect());
}

void parabolicas::borrar(int x, int y)
{
    if(posx>=x and posx<=x+23)delete this;
}
