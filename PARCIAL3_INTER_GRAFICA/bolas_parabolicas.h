#ifndef BOLAS_PARABOLICAS_H
#define BOLAS_PARABOLICAS_H
#include <QGraphicsItem>
#include <QPainter>

class bolas_parabolicas: public QGraphicsItem
{
    int r;
    int posx, posy;

public:
    pastillas(int r_, int x, int y);
    void setR(int radio);
    void setPosx(int px);
    void setPosy(int py);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    void borrar(int x,int y);
};

#endif // PASTILLAS_H
