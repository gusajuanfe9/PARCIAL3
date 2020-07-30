#include "caidas.h"

caidas::caidas(int r_, int x, int y)
{
    r = r_;
    posx = x;
    posy = y;
    setPos(posx,posy);
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
