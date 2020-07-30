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
    int xr;
    xr=-390+rand()%(391-(-390));
    p=new parabolicas(10,xr,-200);
    escena->addItem(p);
}

void MainWindow::crear_c()
{

    int xr;
    xr=-390+rand()%(391-(-390));
    c=new caidas(10,xr,-200);
    escena->addItem(c);
}


void MainWindow::on_pushButton_clicked()
{
    //Se muestran las instrucciones del juego
    QMessageBox msgBox;
    msgBox.setWindowTitle("¿Como jugar?");
    msgBox.setText("Balas caida libre con W y las parabolicas actuan cada 4 segundos");
    msgBox.exec();
}
