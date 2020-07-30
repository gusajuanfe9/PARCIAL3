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
    crear_p();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::crear_p()
{
    p=new parabolicas(100,-119,6);
    escena->addItem(p);
}

