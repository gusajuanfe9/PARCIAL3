#ifndef PARABOLICAS_H
#define PARABOLICAS_H
#include <QGraphicsItem>
#include <QPainter>

class parabolicas: public QGraphicsItem
{
    int r;
    int posx, posy;

public:
    parabolicas(int r_, int x, int y);
    void setR(int radio);
    void setPosx(int px);
    void setPosy(int py);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    void borrar(int x,int y);
};

#endif // PARABOLICAS_H
