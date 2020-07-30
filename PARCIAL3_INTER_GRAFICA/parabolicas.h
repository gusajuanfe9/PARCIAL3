#ifndef PARABOLICAS_H
#define PARABOLICAS_H
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
class parabolicas: public QObject, public QGraphicsItem
{
    Q_OBJECT
    int r;

public:
    double posx, posy, y0;
    double velx=20;
    double vely=20;
    double yd;
    parabolicas(int r_, int x, int y);
    void setR(int radio);
    void setPosx(int px);
    void setPosy(int py);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    void borrar();
public slots:
    void movimiento();
};

#endif // PARABOLICAS_H
