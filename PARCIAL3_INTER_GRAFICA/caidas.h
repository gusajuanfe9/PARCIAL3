#ifndef CAIDAS_H
#define CAIDAS_H

#include <QGraphicsItem>
#include <QPainter>

class caidas: public QGraphicsItem
{
    int r;
    int posx, posy;

public:
    caidas(int r_, int x, int y);
    void setR(int radio);
    void setPosx(int px);
    void setPosy(int py);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    void borrar(int x,int y);
};

#endif // CAIDAS_H
