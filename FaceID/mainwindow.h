#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "webcam.h"

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_pushButton_4_pressed();

    void on_pushButton_6_pressed();

    void on_pushButton_5_pressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
