/********************************************************************************
** Form generated from reading UI file 'snimokcam.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNIMOKCAM_H
#define UI_SNIMOKCAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_snimokCam
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *snimokCam)
    {
        if (snimokCam->objectName().isEmpty())
            snimokCam->setObjectName(QString::fromUtf8("snimokCam"));
        snimokCam->resize(1125, 704);
        snimokCam->setStyleSheet(QString::fromUtf8("border-left: 5px;\n"
"background-color: rgb(248, 244, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        frame = new QFrame(snimokCam);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 70, 761, 521));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(6, 2, 751, 511));
        label->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"background-color: rgb(230, 233, 250);\n"
"border: 0.5px solid rgb(101, 126, 253);\n"
"border-radius: 8px;\n"
"color: rgb(105, 127, 254);\n"
""));
        pushButton_2 = new QPushButton(snimokCam);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 630, 111, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 237, 253);\n"
"border: 0.5px solid rgb(101, 126, 253);\n"
"border-radius: 8px;\n"
"color: rgb(105, 127, 254);\n"
"text-align: center;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        layoutWidget = new QWidget(snimokCam);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(800, 550, 311, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButton_3);

        widget = new QWidget(snimokCam);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(800, 70, 311, 471));
        widget->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"background-color: rgb(230, 233, 250);\n"
"border: 0.5px solid rgb(101, 126, 253);\n"
"border-radius: 8px;\n"
"color: rgb(105, 127, 254);\n"
"font: 75 13pt \"MS Shell Dlg 2\";"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);


        retranslateUi(snimokCam);

        QMetaObject::connectSlotsByName(snimokCam);
    } // setupUi

    void retranslateUi(QDialog *snimokCam)
    {
        snimokCam->setWindowTitle(QApplication::translate("snimokCam", "Dialog", nullptr));
        label->setText(QApplication::translate("snimokCam", "TextLabel", nullptr));
        pushButton_2->setText(QApplication::translate("snimokCam", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_4->setText(QApplication::translate("snimokCam", "\320\227\320\260\321\200\320\265\320\263\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\n"
" \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260", nullptr));
        pushButton_3->setText(QApplication::translate("snimokCam", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \n"
"\320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216", nullptr));
        pushButton_5->setText(QApplication::translate("snimokCam", "\320\233\321\216\320\264\320\270 \320\275\320\260 \321\204\320\276\321\202\320\276", nullptr));
        pushButton_6->setText(QApplication::translate("snimokCam", "\320\227\320\260\321\200\320\265\320\263\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\273\321\216\320\264\320\270", nullptr));
        pushButton_7->setText(QApplication::translate("snimokCam", "\320\235\320\265\320\267\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\273\321\216\320\264\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class snimokCam: public Ui_snimokCam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNIMOKCAM_H
