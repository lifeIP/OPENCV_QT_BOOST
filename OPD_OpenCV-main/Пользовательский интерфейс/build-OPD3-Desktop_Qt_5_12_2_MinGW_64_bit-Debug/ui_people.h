/********************************************************************************
** Form generated from reading UI file 'people.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLE_H
#define UI_PEOPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_people
{
public:
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *people)
    {
        if (people->objectName().isEmpty())
            people->setObjectName(QString::fromUtf8("people"));
        people->resize(710, 398);
        people->setStyleSheet(QString::fromUtf8("border-left: 5px;\n"
"background-color: rgb(248, 244, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        pushButton_3 = new QPushButton(people);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(490, 20, 191, 211));
        pushButton_3->setStyleSheet(QString::fromUtf8("border: 0.5px solid rgb(255, 51, 51);\n"
"border-radius: 8px;"));
        layoutWidget = new QWidget(people);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 230, 191, 112));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"border-radius: 8px;\n"
"background-color: rgb(248, 244, 255);\n"
"color: rgb(105, 127, 254);\n"
"font: 75 13pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"border-radius: 8px;\n"
"background-color: rgb(248, 244, 255);\n"
"color: rgb(105, 127, 254);\n"
"font: 75 13pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"border-radius: 8px;\n"
"background-color: rgb(248, 244, 255);\n"
"color: rgb(105, 127, 254);\n"
"font: 75 13pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"border-radius: 8px;\n"
"background-color: rgb(248, 244, 255);\n"
"color: rgb(105, 127, 254);\n"
"font: 75 13pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_3->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_4->raise();
        layoutWidget_2 = new QWidget(people);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(260, 230, 191, 112));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"border-radius: 8px;\n"
"background-color: rgb(248, 244, 255);\n"
"color: rgb(105, 127, 254);\n"
"font: 75 13pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"border-radius: 8px;\n"
"background-color: rgb(248, 244, 255);\n"
"color: rgb(105, 127, 254);\n"
"font: 75 13pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(layoutWidget_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"border-radius: 8px;\n"
"background-color: rgb(248, 244, 255);\n"
"color: rgb(105, 127, 254);\n"
"font: 75 13pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(layoutWidget_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-left: 5px;\n"
"border-radius: 8px;\n"
"background-color: rgb(248, 244, 255);\n"
"color: rgb(105, 127, 254);\n"
"font: 75 13pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(lineEdit_8);

        pushButton_2 = new QPushButton(people);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 20, 191, 211));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 0.5px solid rgb(0, 179, 0);\n"
"border-radius: 8px;"));
        pushButton = new QPushButton(people);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 191, 211));
        pushButton->setStyleSheet(QString::fromUtf8("border: 0.5px solid rgb(0, 179, 0);\n"
"border-radius: 8px;"));

        retranslateUi(people);

        QMetaObject::connectSlotsByName(people);
    } // setupUi

    void retranslateUi(QDialog *people)
    {
        people->setWindowTitle(QApplication::translate("people", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("people", "*\321\204\320\276\321\202\320\276*", nullptr));
        lineEdit->setText(QApplication::translate("people", "\320\230\320\274\321\217", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("people", "\320\232\321\202\320\276 \320\275\320\260 \321\204\320\276\321\202\320\276?", nullptr));
        lineEdit_2->setText(QApplication::translate("people", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("people", "\320\232\321\202\320\276 \320\275\320\260 \321\204\320\276\321\202\320\276?", nullptr));
        lineEdit_4->setText(QApplication::translate("people", "\320\244\320\260\320\272\321\202", nullptr));
        lineEdit_4->setPlaceholderText(QApplication::translate("people", "\320\232\321\202\320\276 \320\275\320\260 \321\204\320\276\321\202\320\276?", nullptr));
        lineEdit_3->setText(QApplication::translate("people", "\320\245\320\276\320\261\320\261\320\270", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("people", "\320\232\321\202\320\276 \320\275\320\260 \321\204\320\276\321\202\320\276?", nullptr));
        lineEdit_5->setText(QApplication::translate("people", "\320\230\320\274\321\217", nullptr));
        lineEdit_5->setPlaceholderText(QApplication::translate("people", "\320\232\321\202\320\276 \320\275\320\260 \321\204\320\276\321\202\320\276?", nullptr));
        lineEdit_6->setText(QApplication::translate("people", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        lineEdit_6->setPlaceholderText(QApplication::translate("people", "\320\232\321\202\320\276 \320\275\320\260 \321\204\320\276\321\202\320\276?", nullptr));
        lineEdit_7->setText(QApplication::translate("people", "\320\244\320\260\320\272\321\202", nullptr));
        lineEdit_7->setPlaceholderText(QApplication::translate("people", "\320\232\321\202\320\276 \320\275\320\260 \321\204\320\276\321\202\320\276?", nullptr));
        lineEdit_8->setText(QApplication::translate("people", "\320\245\320\276\320\261\320\261\320\270", nullptr));
        lineEdit_8->setPlaceholderText(QApplication::translate("people", "\320\232\321\202\320\276 \320\275\320\260 \321\204\320\276\321\202\320\276?", nullptr));
        pushButton_2->setText(QApplication::translate("people", "*\321\204\320\276\321\202\320\276*", nullptr));
        pushButton->setText(QApplication::translate("people", "*\321\204\320\276\321\202\320\276*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class people: public Ui_people {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLE_H
