#include "bolas_parabolicas.h"

pastillas::pastillas(int r_, int x, int y)
{
    r = r_;
    posx = x;
    posy = y;
    setPos(posx,posy);
}

void pastillas::setR(int radio)
{
    r = radio;
}

void pastillas::setPosx(int px)
{
    posx=px;
}

void pastillas::setPosy(int py)
{
    posy = py;
}

QRectF pastillas::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void pastillas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::gray);
    painter->drawEllipse(boundingRect());
}

void pastillas::borrar(int x, int y)
{
    if(posx>=x and posx<=x+23)delete this;
}
