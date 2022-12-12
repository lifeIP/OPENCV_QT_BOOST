/********************************************************************************
** Form generated from reading UI file 'izmenenie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IZMENENIE_H
#define UI_IZMENENIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_izmenenie
{
public:
    QGroupBox *groupBox;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_8;
    QLabel *label_7;
    QLabel *label_8;
    QSpinBox *spinBox_2;
    QLineEdit *lineEdit_9;
    QLabel *label_9;
    QSplitter *splitter;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *izmenenie)
    {
        if (izmenenie->objectName().isEmpty())
            izmenenie->setObjectName(QString::fromUtf8("izmenenie"));
        izmenenie->resize(1125, 704);
        izmenenie->setStyleSheet(QString::fromUtf8("border-left: 5px;\n"
"background-color: rgb(248, 244, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        groupBox = new QGroupBox(izmenenie);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(440, 210, 551, 231));
        groupBox->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"background-color: rgb(230, 233, 250);\n"
"border: 0.5px solid rgb(101, 126, 253);\n"
"border-radius: 8px;\n"
"color: rgb(105, 127, 254);\n"
"font: 75 13pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 40, 81, 31));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 40, 381, 31));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(130, 120, 381, 31));
        lineEdit_8->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 80, 81, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 120, 81, 31));
        spinBox_2 = new QSpinBox(groupBox);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(130, 80, 81, 31));
        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(130, 160, 381, 31));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 160, 81, 31));
        splitter = new QSplitter(izmenenie);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(610, 550, 381, 41));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_4 = new QPushButton(splitter);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 237, 253);\n"
"border: 0.5px solid rgb(101, 126, 253);\n"
"border-radius: 8px;\n"
"color: rgb(105, 127, 254);\n"
"text-align: center;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        splitter->addWidget(pushButton_4);
        pushButton_5 = new QPushButton(splitter);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 237, 253);\n"
"border: 0.5px solid rgb(101, 126, 253);\n"
"border-radius: 8px;\n"
"color: rgb(105, 127, 254);\n"
"text-align: center;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        splitter->addWidget(pushButton_5);
        textBrowser = new QTextBrowser(izmenenie);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(150, 210, 221, 231));
        label = new QLabel(izmenenie);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 441, 91));
        label->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-radius: 8px;\n"
"color: rgb(170, 170, 255);\n"
"text-align: center;\n"
"font: 75 25pt \"MS Shell Dlg 2\";"));

        retranslateUi(izmenenie);

        QMetaObject::connectSlotsByName(izmenenie);
    } // setupUi

    void retranslateUi(QDialog *izmenenie)
    {
        izmenenie->setWindowTitle(QApplication::translate("izmenenie", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_4->setText(QApplication::translate("izmenenie", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\230\320\274\321\217</span></p></body></html>", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("izmenenie", "\320\232\321\202\320\276 \320\275\320\260 \321\204\320\276\321\202\320\276?", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_8->setToolTip(QApplication::translate("izmenenie", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_8->setPlaceholderText(QApplication::translate("izmenenie", "\320\247\320\265\320\274 \321\203\320\262\320\273\320\265\320\272\320\260\320\265\321\202\321\201\321\217?", nullptr));
        label_7->setText(QApplication::translate("izmenenie", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\222\320\276\320\267\321\200\320\260\321\201\321\202</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("izmenenie", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\245\320\276\320\261\320\261\320\270</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_9->setToolTip(QApplication::translate("izmenenie", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_9->setPlaceholderText(QApplication::translate("izmenenie", "\320\241\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\320\260\321\200\321\203 \321\201\320\273\320\276\320\262", nullptr));
        label_9->setText(QApplication::translate("izmenenie", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\244\320\260\320\272\321\202</span></p></body></html>", nullptr));
        pushButton_4->setText(QApplication::translate("izmenenie", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_5->setText(QApplication::translate("izmenenie", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        textBrowser->setHtml(QApplication::translate("izmenenie", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:72; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; font-weight:400;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">*\321\204\320\276\321\202\320\276*</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("izmenenie", "<html><head/><body><p align=\"justify\"><span style=\" font-size:26pt; font-weight:600;\">\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class izmenenie: public Ui_izmenenie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IZMENENIE_H
