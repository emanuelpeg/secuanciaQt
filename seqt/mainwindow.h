#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "juego.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Juego juego;
    void dibujar();
};

#endif // MAINWINDOW_H
