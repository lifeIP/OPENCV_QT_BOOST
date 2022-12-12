#include "webcam.h"
#include "ui_webcam.h"


bool flags[5] = {};

WebCam::WebCam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WebCam)
{
    ui->setupUi(this);

    /*Sets the current scene to scene. If scene is already being viewed, this function does nothing.
    When a scene is set on a view, the QGraphicsScene::changed() signal is automatically connected to
    this view's updateScene() slot, and the view's scroll bars are adjusted to fit the size of the scene.
    The view does not take ownership of scene.
    */
    //source (https://doc.qt.io/qt-6/qgraphicsview.html#setScene)
    ui->graphicsView->setScene(new QGraphicsScene(this)); // Устанавливает текущую сцену и позволяет её в будущем обновлять.
    ui->graphicsView->scene()->addItem(&pixmap); // Устанавливаем новую сцену
}

WebCam::~WebCam()
{
    delete ui;
}


void WebCam::on_startBtn_pressed()
{
    // source code ---- https://amin-ahmadi.com/2018/03/29/how-to-read-process-and-display-videos-using-qt-and-opencv/
    using namespace cv;

    if(video.isOpened())// Если web-камера работает, то на кнопке установится текст
    {
        ui->startBtn->setText("Начать");// устанавливаем текст
        video.release();
        return;
    }

    //Обработка возможных проблем++++++++++++++++++++++++++++++++++++++++++++++++
    bool isCamera; // Если пользователь не указал номер веб-камеры или ошибся в записи, то тут будет 0
    int cameraIndex = ui->videoEdit->text().toInt(&isCamera);

    if(isCamera)
    {
        if(!video.open(cameraIndex))//
        {
            QMessageBox::critical(this,
                                  "Что-то не то с камерой",
                                  "Возможно вы ввели неверный индекс, попробуйте другой от 0 и т.д.");
            flags[0] = false;
            return;
        }
    }
    else
    {
        if(!video.open(ui->videoEdit->text().trimmed().toStdString()))
        {
            QMessageBox::critical(this,
                                  "Ошибка видео",
                                  "Вы везунчик, эта ошибка не была вызвана при тестировании этого приложения!"
                                  );
            flags[0] = false;
            return;
        }
    }
    //Обработка возможных проблем-----------------------------------------------
    ui->startBtn->setText("Остановить");

    Mat frame;
    while(video.isOpened())
    {
        video >> frame;
        if(!frame.empty())
        {
            QImage qimg(frame.data,
                        frame.cols,
                        frame.rows,
                        frame.step,
                        QImage::Format_RGB888);
            pixmap.setPixmap( QPixmap::fromImage(qimg.rgbSwapped()) );
            ui->graphicsView->fitInView(&pixmap, Qt::KeepAspectRatio);
        }
        qApp->processEvents();
    }
    imwrite("C:\\temp\\bullshit_that_is_needed_for_the_program_to_work.jpg", frame);
    flags[0] = true;

    ui->startBtn->setText("Начать");
}

void WebCam::closeEvent(QCloseEvent *event)
{
    if(video.isOpened())
    {
        QMessageBox::warning(this,
                             "Предупреждение",
                             "Остановите видео до того как выйти из окна!");
        event->ignore();
    }
    else
    {
        event->accept();
    }
}


void WebCam::on_pushButton_clicked()//кнопка выбрать
{
    if(flags[0]){
        close();
    }
    else {
        QMessageBox::warning(this,
                             "Предупреждение",
                             "Вы не выбрали фото!");
    }
}
