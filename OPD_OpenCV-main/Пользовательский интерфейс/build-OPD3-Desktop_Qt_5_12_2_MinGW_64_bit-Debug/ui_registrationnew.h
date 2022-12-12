/********************************************************************************
** Form generated from reading UI file 'registrationnew.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONNEW_H
#define UI_REGISTRATIONNEW_H

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

class Ui_registrationNew
{
public:
    QSplitter *splitter;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_6;
    QLabel *label_3;
    QLabel *label_5;
    QSpinBox *spinBox;
    QLineEdit *lineEdit_7;
    QLabel *label_6;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *registrationNew)
    {
        if (registrationNew->objectName().isEmpty())
            registrationNew->setObjectName(QString::fromUtf8("registrationNew"));
        registrationNew->resize(1125, 704);
        registrationNew->setMouseTracking(true);
        registrationNew->setStyleSheet(QString::fromUtf8("border-left: 5px;\n"
"background-color: rgb(248, 244, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        splitter = new QSplitter(registrationNew);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(600, 550, 381, 41));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 237, 253);\n"
"border: 0.5px solid rgb(101, 126, 253);\n"
"border-radius: 8px;\n"
"color: rgb(105, 127, 254);\n"
"text-align: center;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        splitter->addWidget(pushButton_2);
        pushButton_3 = new QPushButton(splitter);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 237, 253);\n"
"border: 0.5px solid rgb(101, 126, 253);\n"
"border-radius: 8px;\n"
"color: rgb(105, 127, 254);\n"
"text-align: center;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        splitter->addWidget(pushButton_3);
        groupBox = new QGroupBox(registrationNew);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(430, 210, 551, 231));
        groupBox->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"background-color: rgb(230, 233, 250);\n"
"border: 0.5px solid rgb(101, 126, 253);\n"
"border-radius: 8px;\n"
"color: rgb(105, 127, 254);\n"
"font: 75 13pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 40, 81, 31));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 40, 381, 31));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(130, 120, 381, 31));
        lineEdit_6->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 80, 81, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 120, 81, 31));
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(130, 80, 81, 31));
        spinBox->setCursor(QCursor(Qt::ArrowCursor));
        spinBox->setStyleSheet(QString::fromUtf8(""));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(130, 160, 381, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 160, 81, 31));
        label = new QLabel(registrationNew);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 431, 91));
        label->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-radius: 8px;\n"
"color: rgb(170, 170, 255);\n"
"text-align: center;\n"
"font: 75 25pt \"MS Shell Dlg 2\";"));
        textBrowser = new QTextBrowser(registrationNew);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(150, 210, 221, 231));

        retranslateUi(registrationNew);

        QMetaObject::connectSlotsByName(registrationNew);
    } // setupUi

    void retranslateUi(QDialog *registrationNew)
    {
        registrationNew->setWindowTitle(QApplication::translate("registrationNew", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("registrationNew", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_3->setText(QApplication::translate("registrationNew", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("registrationNew", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\230\320\274\321\217</span></p></body></html>", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("registrationNew", "\320\232\321\202\320\276 \320\275\320\260 \321\204\320\276\321\202\320\276?", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_6->setToolTip(QApplication::translate("registrationNew", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_6->setPlaceholderText(QApplication::translate("registrationNew", "\320\247\320\265\320\274 \321\203\320\262\320\273\320\265\320\272\320\260\320\265\321\202\321\201\321\217?", nullptr));
        label_3->setText(QApplication::translate("registrationNew", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\222\320\276\320\267\321\200\320\260\321\201\321\202</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("registrationNew", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\245\320\276\320\261\320\261\320\270</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_7->setToolTip(QApplication::translate("registrationNew", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_7->setPlaceholderText(QApplication::translate("registrationNew", "\320\241\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\320\260\321\200\321\203 \321\201\320\273\320\276\320\262", nullptr));
        label_6->setText(QApplication::translate("registrationNew", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\244\320\260\320\272\321\202</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("registrationNew", "<html><head/><body><p align=\"justify\"><span style=\" font-size:26pt; font-weight:600;\">\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260</span></p></body></html>", nullptr));
        textBrowser->setHtml(QApplication::translate("registrationNew", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:72; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; font-weight:400;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">*\321\204\320\276\321\202\320\276*</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrationNew: public Ui_registrationNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONNEW_H
