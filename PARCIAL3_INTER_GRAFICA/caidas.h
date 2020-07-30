#ifndef CAIDAS_H
#define CAIDAS_H

#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>

class caidas: public QObject, public QGraphicsItem
{
    Q_OBJECT
    int r=4;
    double posx, posy,y0;
    double vely=0;
    double yd;
public:
    caidas(int r_, int x, int y);
    void setR(int radio);
    void setPosx(int px);
    void setPosy(int py);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    void borrar(int x,int y);
public slots:
    void movimiento();
};

#endif // CAIDAS_H
