#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "camera.h"
#include "snimokcam.h"
#include <QMessageBox>
#include <QListWidget>
#include <QFileDialog>
#include <QPixmap>
#include <QPalette>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    ui->pushButton_10->setStyleSheet("QPushButton{border: 0.5px solid rgb(101, 126, 253); border-radius: 8px; background-color: rgb(234, 237, 253); }"
                                     "QPushButton:hover{background-color: rgb(186, 195, 242); border: 0.5px solid rgb(101, 126, 253); border-radius: 8px; }");

    QPalette palette;
    ui->pushButton_10->setAutoFillBackground(true);
    palette = ui->pushButton_10->palette();
    palette.setColor(QPalette::Button,QColor(82,110,166));
    ui->pushButton_10->setPalette(palette);
    ui->pushButton_10->setIcon(QIcon("C:/Users/molok/Desktop/Code/OPD3/camera.png"));
    ui->pushButton_10->setCheckable(true);




    ui->pushButton_11->setStyleSheet("QPushButton{background-color: rgb(234, 237, 253); border: 0.5px solid rgb(101, 126, 253); border-radius: 8px;}"
                                     "QPushButton:hover{background-color: rgb(186, 195, 242); border: 0.5px solid rgb(101, 126, 253); border-radius: 8px;}");
    ui->pushButton_11->setCheckable(true);
    QPalette palette_1;
    ui->pushButton_11->setAutoFillBackground(true);
    palette_1 = ui->pushButton_11->palette();
    palette.setColor(QPalette::Button,QColor(82,110,166));
    ui->pushButton_11->setPalette(palette_1);
    ui->pushButton_11->setIcon(QIcon("C:/Users/molok/Desktop/Code/OPD3/file.png"));



    ui->pushButton->setStyleSheet("QPushButton{background-color: rgb(234, 237, 253); border: 0.5px solid rgb(101, 126, 253); border-radius: 8px; color: rgb(105, 127, 254); text-align: center; font: 75 20pt \"MS Shell Dlg 2\";}"
                                      "QPushButton:hover{background-color: rgb(186, 195, 242); border: 0.5px solid rgb(101, 126, 253); border-radius: 8px; color: rgb(240, 248, 255)}");
    ui->pushButton->setCheckable(true);



    ui->pushButton_2->setCheckable(true);
    QPalette palette_2;
    ui->pushButton_2->setAutoFillBackground(true);
    palette_2 = ui->pushButton_2->palette();
    palette.setColor(QPalette::Button,QColor(82,110,166));
    ui->pushButton_2->setPalette(palette_2);
    ui->pushButton_2->setIcon(QIcon("C:/Users/molok/Desktop/Code/OPD3/icon.ico"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "??????????", "???? ?????????????????????????? ???????????? ???????????", QMessageBox::Yes | QMessageBox::No);
    if(reply==QMessageBox::Yes){
        close();
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    camera window;
    window.setModal(true);
    window.setWindowTitle("?????????????????????????? ??????");
    QMessageBox::StandardButton reply = QMessageBox::question(this, "???????????? ?? ????????????", "?????????????????? ???????????????????? ???????????? ?? Web-?????????????", QMessageBox::Yes | QMessageBox::No);
    if(reply==QMessageBox::Yes){
        window.exec();
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"), nullptr, tr("JPEG Image (*.jpg);; PNG Image (*.png)"));

    if(fileNames.isEmpty()){
        return;
    }

    cv::Mat data = cv::imread(fileNames.at(0).toStdString() , cv::IMREAD_COLOR);
    cv::imwrite("C:\\temp\\a_file_that_is_no_longer_needed_and_you_can_delete_it.png", data);

    snimokCam window;
    window.setModal(true);
    window.setWindowTitle("?????????????????????????? ??????");
    window.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    system("start IEXPLORE.EXE \"https://github.com/pcowTawer/OPD_OpenCV\"");
}
