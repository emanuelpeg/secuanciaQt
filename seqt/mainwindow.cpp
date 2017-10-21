#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->dibujar();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dibujar() {
    ui->label->setText(QString::number(juego.getValor0()));
    ui->label_2->setText(QString::number(juego.getValor1()));
    ui->label_3->setText(QString::number(juego.getValor3()));
    ui->spinBox->setValue(0);
}

void MainWindow::on_pushButton_clicked()
{   QString msg;

    if (juego.validar(ui->spinBox->value())) {
        msg = "ganaste  Puntaje:"+ QString::number(juego.getPuntos());
    } else {
        msg = "perdio Puntaje:"+ QString::number(juego.getPuntos());
    }

    int i = QMessageBox::warning(this, tr("Resultado"),
                                       msg,
                                       QMessageBox::Ok  ,
                                       QMessageBox::Ok);


    this->dibujar();
}
