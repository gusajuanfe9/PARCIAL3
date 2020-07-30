#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bala_parabolica.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escena= new QGraphicsScene;
    escena->setSceneRect(0,0,200,200);
    view->setScene(escena);
    view->resize(1000, 625);
    crear_p();
    timer=new QTimer();
    timer->start(4000);
    //Se hace un connect con la funcion crear_enemigos
    connect(timer,SIGNAL(timeout()),this,SLOT(crear_p()));

}
void MainWindow::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key::Key_W){
        crear_c();
    }
    }
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::crear_p()
{
    double xr;
    //xr=-390+rand()(391-(-390));
    p=new parabolicas(10,390,-200);
    escena->addItem(p);
}

void MainWindow::crear_c()
{
    c=new caidas(10,-390,-200);
    escena->addItem(c);
}

