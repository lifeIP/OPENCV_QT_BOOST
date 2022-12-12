#ifndef WEBCAM_H
#define WEBCAM_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <QMainWindow>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QPixmap>
#include <QCloseEvent>
#include <QMessageBox>

namespace Ui {
class WebCam;
}

class WebCam : public QDialog
{
    Q_OBJECT

public:
    explicit WebCam(QWidget *parent = nullptr);
    ~WebCam();

private slots:
    void closeEvent(QCloseEvent *event);
    void on_startBtn_pressed();

    void on_pushButton_clicked();

private:
    Ui::WebCam *ui;
    QGraphicsPixmapItem pixmap;
    cv::VideoCapture video;
};

#endif // WEBCAM_H
