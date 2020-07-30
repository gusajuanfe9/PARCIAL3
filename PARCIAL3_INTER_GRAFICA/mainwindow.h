#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QPixmap>
#include <QKeyEvent>
#include <QTimer>
#include "parabolicas.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QGraphicsView *view= new QGraphicsView (this);
private slots:
    void crear_p();

private:
    Ui::MainWindow *ui;
    parabolicas *p;
    QGraphicsScene *escena;
};
#endif // MAINWINDOW_H
