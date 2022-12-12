/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_camera
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *camera)
    {
        if (camera->objectName().isEmpty())
            camera->setObjectName(QString::fromUtf8("camera"));
        camera->resize(1125, 704);
        camera->setStyleSheet(QString::fromUtf8("border-left: 5px;\n"
"background-color: rgb(248, 244, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        pushButton = new QPushButton(camera);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(730, 600, 211, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 237, 253);\n"
"border: 0.5px solid rgb(101, 126, 253);\n"
"border-radius: 8px;\n"
"color: rgb(105, 127, 254);\n"
"text-align: center;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        pushButton_2 = new QPushButton(camera);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 600, 211, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 237, 253);\n"
"border: 0.5px solid rgb(101, 126, 253);\n"
"border-radius: 8px;\n"
"color: rgb(105, 127, 254);\n"
"text-align: center;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        graphicsView = new QGraphicsView(camera);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 10, 1081, 551));

        retranslateUi(camera);
        QObject::connect(pushButton, SIGNAL(clicked()), camera, SLOT(close()));

        QMetaObject::connectSlotsByName(camera);
    } // setupUi

    void retranslateUi(QDialog *camera)
    {
        camera->setWindowTitle(QApplication::translate("camera", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("camera", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QApplication::translate("camera", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \321\201\320\275\320\270\320\274\320\276\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class camera: public Ui_camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
