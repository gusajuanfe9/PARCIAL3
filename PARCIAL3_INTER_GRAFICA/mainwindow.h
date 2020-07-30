#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QPixmap>
#include <QKeyEvent>
#include <QTimer>
#include <stdlib.h>
#include <time.h>
#include "parabolicas.h"
#include "caidas.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void keyPressEvent(QKeyEvent *event);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QGraphicsView *view= new QGraphicsView (this);
    QTimer *timer;
private slots:
    void crear_p();
    void crear_c();

private:
    Ui::MainWindow *ui;
    parabolicas *p;
    caidas *c;
    QGraphicsScene *escena;
};
#endif // MAINWINDOW_H
