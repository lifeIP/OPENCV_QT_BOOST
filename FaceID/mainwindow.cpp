#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "webcam.h"

#include "constants.h"
#include "database.h"
#include "facerecognition.h"

#include <QtSql>
#include <QThread>

#include <iostream>
#include <string>

static QString changed_path;
extern bool flags[5];
extern int ID = 0;

FaceRecognition face_recognition(current_path + "XML/haarcascade_frontalface_default.xml", current_path + "XML/recognizer.xml", current_path + "persons.db", 0);



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Устанавливаем задний фон на окно+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    {
        std::string sithezComand= "#centralWidget { border-image: url(" + current_path + "resources/background.jpg) 0 0 0 0 stretch stretch;}";
        this->setStyleSheet(sithezComand.c_str());
    }
    // Устанавливаем задний фон на окно---------------------------------------------------------------------------------------------------------------------------------------------------------


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{

    // Установка фотографий на фторое окно++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    QPixmap image_3((current_path + std::string("resources/fotoalbom.png")).c_str());
    ui->label_3->setPixmap(image_3);
    ui->label_3->setBackgroundRole(QPalette::Base);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->label_3->setScaledContents(true);

    QPixmap image_4((current_path + std::string("resources/kamera.png")).c_str());
    ui->label_4->setPixmap(image_4);
    ui->label_4->setBackgroundRole(QPalette::Base);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->label_4->setScaledContents(true);
    // Установка фотографий на фторое окно-----------------------------------------------------------------------------------------------------------------------------------------------------



    // Устанавливаем задний фон на окно++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    {
        std::string sithezComand= "#centralWidget { border-image: url(" + current_path + "resources/background.jpg) 0 0 0 0 stretch stretch;}";
        this->setStyleSheet(sithezComand.c_str());
    }
    // Устанавливаем задний фон на окно-------------------------------------------------------------------------------------------------------------------------------------------------------

    ui->stackedWidget->setCurrentIndex(1); // Говорим, что нужно отображать страницу с индексом 1

}

void MainWindow::on_pushButton_clicked()
{

    // Открываем окно проводник и устанавливаем фильтры+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    changed_path = QFileDialog::getOpenFileName(this, "Выберите фото", "",
                                                "JPEG Image (*.jpg);; PNG Image (*.png)");
    // Открываем окно проводник и устанавливаем фильтры---------------------------------------------------------------------------------------------------------------------------------------




    // Меняем фотографию на выбранную ранее+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    QPixmap image_3(changed_path);
    ui->label_3->setPixmap(image_3);
    ui->label_3->setBackgroundRole(QPalette::Base);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->label_3->setScaledContents(true);
    // Меняем фотографию на выбранную ранее---------------------------------------------------------------------------------------------------------------------------------------------------
    flags[0] = false;
}


void MainWindow::on_pushButton_2_clicked()
{

    // Запуск окна отвечающего за веб камеру++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    WebCam web;
    web.setModal(true);
    web.exec();
    if(flags[0]){
        QPixmap image_4("C:\\temp\\bullshit_that_is_needed_for_the_program_to_work.jpg");
        ui->label_4->setPixmap(image_4);
        ui->label_4->setBackgroundRole(QPalette::Base);
        ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label_4->setScaledContents(true);
    }

    // Запуск окна отвечающего за веб камеру--------------------------------------------------------------------------------------------------------------------------------------------------

}

void MainWindow::on_pushButton_4_pressed()
{
    // Если файл не был выбран ранее, то выведётся сообщение об ошибке++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    if(changed_path.size() != 0 || flags[0]){
        if(flags[0]){
            changed_path = "C:\\temp\\bullshit_that_is_needed_for_the_program_to_work.jpg";
            flags[0] = false;
        }

        cv::Mat changed_foto = cv::imread(changed_path.toStdString(), IMREAD_GRAYSCALE);


        // Тут происходит магия OpenCV=======================================================================================================================================================

        int predicate_label = 0;
        double is_sure = 0;
        face_recognition.FindPerson(changed_foto, predicate_label, is_sure);
        DBase::clearbus();
        DBase DB(current_path + "persons.db");
        DBase::execute(DB, "SELECT IMG FROM PEOPLE WHERE ID = " + to_string(predicate_label));
        QPixmap image_6((current_path + DBase::get_the_first_response_received().second).c_str());
        DB.~DBase();
        ui->label_6->setPixmap(image_6);
        ui->label_6->setBackgroundRole(QPalette::Base);
        ui->label_6->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label_6->setScaledContents(true);
        ID = predicate_label;
        // Тут происходит магия OpenCV=======================================================================================================================================================




        QPixmap image_5 = QPixmap::fromImage(QImage(changed_foto.data,
                                                    changed_foto.cols,
                                                    changed_foto.rows,
                                                    QImage::Format_Grayscale8));



        ui->label_5->setPixmap(image_5);
        ui->label_5->setBackgroundRole(QPalette::Base);
        ui->label_5->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label_5->setScaledContents(true);

        ui->stackedWidget->setCurrentIndex(2);


    }
    else{
        QMessageBox messageBox;
        messageBox.critical(nullptr,"Ой, что-то пошло не так...","Попробуйте выбрать фото, а потом нажмите эту кнопку.");
        messageBox.setFixedSize(500,200);
    }
    // Если файл не был выбран ранее, то выведётся сообщение об ошибке------------------------------------------------------------------------------------------------------------------------

}

void MainWindow::on_pushButton_6_pressed()
{
     ui->stackedWidget->setCurrentIndex(1); // Говорим, что нужно отображать страницу с индексом 1
}

void MainWindow::on_pushButton_5_pressed()
{
    DBase::clearbus();
    DBase DB(current_path + "persons.db");
    DBase::execute(DB, "SELECT PERSONAL_DATA FROM PEOPLE WHERE ID = " + to_string(ID));

}
