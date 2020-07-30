#include "mainwindow.h"
#include "parabolicas.h"


parabolicas::parabolicas(int r_, int x, int y)
{
    r = r_;
    posx = x;
    posy = y;
    setPos(posx,posy);
    QTimer *t=new QTimer();

    connect(t,SIGNAL(timeout()),this,SLOT(movimiento()));
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


void parabolicas::movimiento()
{
    posx=posx+velx;
    posy=posy+vely-(9.8)/2;
    vely=vely-(9.8)/2;
    yd=2*y0-posy;
    setPos(int(posx),int(yd));

}
