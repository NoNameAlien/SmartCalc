/********************************************************************************
** Form generated from reading UI file 'maincalc.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCALC_H
#define UI_MAINCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainCalc
{
public:
    QWidget *centralwidget;
    QPushButton *AC;
    QPushButton *left;
    QPushButton *right;
    QPushButton *mod;
    QPushButton *sin;
    QPushButton *cos;
    QPushButton *push_7;
    QPushButton *push_8;
    QPushButton *pow;
    QPushButton *push_9;
    QPushButton *asin;
    QPushButton *div;
    QPushButton *acos;
    QPushButton *push_4;
    QPushButton *push_2;
    QPushButton *push_6;
    QPushButton *tan;
    QPushButton *mult;
    QPushButton *push_5;
    QPushButton *sqrt;
    QPushButton *push_1;
    QPushButton *push_3;
    QPushButton *minus;
    QPushButton *log;
    QPushButton *ln;
    QPushButton *atan;
    QPushButton *push_x;
    QPushButton *push_0;
    QPushButton *plus;
    QPushButton *eq;
    QPushButton *point;
    QPushButton *Graph;
    QLineEdit *EnterX;
    QLineEdit *Xmax;
    QLineEdit *Ymin;
    QLineEdit *Xmin;
    QLineEdit *Ymax;
    QCustomPlot *widget;
    QLineEdit *label;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_function;

    void setupUi(QMainWindow *MainCalc)
    {
        if (MainCalc->objectName().isEmpty())
            MainCalc->setObjectName("MainCalc");
        MainCalc->resize(455, 390);
        MainCalc->setMinimumSize(QSize(455, 390));
        MainCalc->setMaximumSize(QSize(845, 390));
        MainCalc->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainCalc);
        centralwidget->setObjectName("centralwidget");
        AC = new QPushButton(centralwidget);
        AC->setObjectName("AC");
        AC->setGeometry(QRect(195, 65, 130, 65));
        QFont font;
        font.setPointSize(14);
        AC->setFont(font);
        AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        left = new QPushButton(centralwidget);
        buttonGroup = new QButtonGroup(MainCalc);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(left);
        left->setObjectName("left");
        left->setGeometry(QRect(0, 65, 65, 65));
        left->setFont(font);
        left->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        right = new QPushButton(centralwidget);
        buttonGroup->addButton(right);
        right->setObjectName("right");
        right->setGeometry(QRect(65, 65, 65, 65));
        right->setFont(font);
        right->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        mod = new QPushButton(centralwidget);
        buttonGroup->addButton(mod);
        mod->setObjectName("mod");
        mod->setGeometry(QRect(325, 65, 65, 65));
        mod->setFont(font);
        mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        sin = new QPushButton(centralwidget);
        buttonGroup_function = new QButtonGroup(MainCalc);
        buttonGroup_function->setObjectName("buttonGroup_function");
        buttonGroup_function->addButton(sin);
        sin->setObjectName("sin");
        sin->setGeometry(QRect(0, 130, 65, 65));
        sin->setFont(font);
        sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        cos = new QPushButton(centralwidget);
        buttonGroup_function->addButton(cos);
        cos->setObjectName("cos");
        cos->setGeometry(QRect(65, 130, 65, 65));
        cos->setFont(font);
        cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        push_7 = new QPushButton(centralwidget);
        buttonGroup->addButton(push_7);
        push_7->setObjectName("push_7");
        push_7->setGeometry(QRect(195, 130, 65, 65));
        push_7->setFont(font);
        push_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(156, 157, 161);\n"
"}"));
        push_8 = new QPushButton(centralwidget);
        buttonGroup->addButton(push_8);
        push_8->setObjectName("push_8");
        push_8->setGeometry(QRect(260, 130, 65, 65));
        push_8->setFont(font);
        push_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(156, 157, 161);\n"
"}"));
        pow = new QPushButton(centralwidget);
        buttonGroup->addButton(pow);
        pow->setObjectName("pow");
        pow->setGeometry(QRect(130, 65, 65, 65));
        pow->setFont(font);
        pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        push_9 = new QPushButton(centralwidget);
        buttonGroup->addButton(push_9);
        push_9->setObjectName("push_9");
        push_9->setGeometry(QRect(325, 130, 65, 65));
        push_9->setFont(font);
        push_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(156, 157, 161);\n"
"}"));
        asin = new QPushButton(centralwidget);
        buttonGroup_function->addButton(asin);
        asin->setObjectName("asin");
        asin->setGeometry(QRect(0, 195, 65, 65));
        asin->setFont(font);
        asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        div = new QPushButton(centralwidget);
        buttonGroup->addButton(div);
        div->setObjectName("div");
        div->setGeometry(QRect(390, 65, 65, 65));
        div->setFont(font);
        div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(238, 162, 59);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(193, 129, 46);\n"
"}"));
        acos = new QPushButton(centralwidget);
        buttonGroup_function->addButton(acos);
        acos->setObjectName("acos");
        acos->setGeometry(QRect(65, 195, 65, 65));
        acos->setFont(font);
        acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        push_4 = new QPushButton(centralwidget);
        buttonGroup->addButton(push_4);
        push_4->setObjectName("push_4");
        push_4->setGeometry(QRect(195, 195, 65, 65));
        push_4->setFont(font);
        push_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(156, 157, 161);\n"
"}"));
        push_2 = new QPushButton(centralwidget);
        buttonGroup->addButton(push_2);
        push_2->setObjectName("push_2");
        push_2->setGeometry(QRect(260, 260, 65, 65));
        push_2->setFont(font);
        push_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(156, 157, 161);\n"
"}"));
        push_6 = new QPushButton(centralwidget);
        buttonGroup->addButton(push_6);
        push_6->setObjectName("push_6");
        push_6->setGeometry(QRect(325, 195, 65, 65));
        push_6->setFont(font);
        push_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(156, 157, 161);\n"
"}"));
        tan = new QPushButton(centralwidget);
        buttonGroup_function->addButton(tan);
        tan->setObjectName("tan");
        tan->setGeometry(QRect(130, 130, 65, 65));
        tan->setFont(font);
        tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        mult = new QPushButton(centralwidget);
        buttonGroup->addButton(mult);
        mult->setObjectName("mult");
        mult->setGeometry(QRect(390, 130, 65, 65));
        mult->setFont(font);
        mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(238, 162, 59);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(193, 129, 46);\n"
"}"));
        push_5 = new QPushButton(centralwidget);
        buttonGroup->addButton(push_5);
        push_5->setObjectName("push_5");
        push_5->setGeometry(QRect(260, 195, 65, 65));
        push_5->setFont(font);
        push_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(156, 157, 161);\n"
"}"));
        sqrt = new QPushButton(centralwidget);
        buttonGroup_function->addButton(sqrt);
        sqrt->setObjectName("sqrt");
        sqrt->setGeometry(QRect(0, 260, 65, 65));
        sqrt->setFont(font);
        sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        push_1 = new QPushButton(centralwidget);
        buttonGroup->addButton(push_1);
        push_1->setObjectName("push_1");
        push_1->setGeometry(QRect(195, 260, 65, 65));
        push_1->setFont(font);
        push_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(156, 157, 161);\n"
"}"));
        push_3 = new QPushButton(centralwidget);
        buttonGroup->addButton(push_3);
        push_3->setObjectName("push_3");
        push_3->setGeometry(QRect(325, 260, 65, 65));
        push_3->setFont(font);
        push_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(156, 157, 161);\n"
"}"));
        minus = new QPushButton(centralwidget);
        buttonGroup->addButton(minus);
        minus->setObjectName("minus");
        minus->setGeometry(QRect(390, 195, 65, 65));
        minus->setFont(font);
        minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(238, 162, 59);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(193, 129, 46);\n"
"}"));
        log = new QPushButton(centralwidget);
        buttonGroup_function->addButton(log);
        log->setObjectName("log");
        log->setGeometry(QRect(65, 260, 65, 65));
        log->setFont(font);
        log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        ln = new QPushButton(centralwidget);
        buttonGroup_function->addButton(ln);
        ln->setObjectName("ln");
        ln->setGeometry(QRect(130, 260, 65, 65));
        ln->setFont(font);
        ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        atan = new QPushButton(centralwidget);
        buttonGroup_function->addButton(atan);
        atan->setObjectName("atan");
        atan->setGeometry(QRect(130, 195, 65, 65));
        atan->setFont(font);
        atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        push_x = new QPushButton(centralwidget);
        buttonGroup->addButton(push_x);
        push_x->setObjectName("push_x");
        push_x->setGeometry(QRect(130, 325, 65, 65));
        push_x->setFont(font);
        push_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(58, 62, 66);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(93, 95, 95);\n"
"}"));
        push_0 = new QPushButton(centralwidget);
        buttonGroup->addButton(push_0);
        push_0->setObjectName("push_0");
        push_0->setGeometry(QRect(195, 325, 65, 65));
        push_0->setFont(font);
        push_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(156, 157, 161);\n"
"}"));
        plus = new QPushButton(centralwidget);
        buttonGroup->addButton(plus);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(390, 260, 65, 65));
        plus->setFont(font);
        plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(238, 162, 59);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(193, 129, 46);\n"
"}"));
        eq = new QPushButton(centralwidget);
        eq->setObjectName("eq");
        eq->setGeometry(QRect(390, 325, 65, 65));
        eq->setFont(font);
        eq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(238, 162, 59);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(193, 129, 46);\n"
"}"));
        point = new QPushButton(centralwidget);
        buttonGroup->addButton(point);
        point->setObjectName("point");
        point->setGeometry(QRect(260, 325, 65, 65));
        point->setFont(font);
        point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(156, 157, 161);\n"
"}"));
        Graph = new QPushButton(centralwidget);
        Graph->setObjectName("Graph");
        Graph->setGeometry(QRect(0, 325, 65, 65));
        Graph->setFont(font);
        Graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(238, 162, 59);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(193, 129, 46);\n"
"}"));
        EnterX = new QLineEdit(centralwidget);
        EnterX->setObjectName("EnterX");
        EnterX->setGeometry(QRect(325, 325, 65, 65));
        EnterX->setFont(font);
        EnterX->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: rgb(93, 95, 95);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
""));
        EnterX->setAlignment(Qt::AlignCenter);
        Xmax = new QLineEdit(centralwidget);
        Xmax->setObjectName("Xmax");
        Xmax->setGeometry(QRect(65, 325, 65, 16));
        Xmax->setFont(font);
        Xmax->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: rgb(238, 162, 59);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
""));
        Xmax->setAlignment(Qt::AlignCenter);
        Ymin = new QLineEdit(centralwidget);
        Ymin->setObjectName("Ymin");
        Ymin->setGeometry(QRect(65, 374, 65, 16));
        Ymin->setFont(font);
        Ymin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: rgb(238, 162, 59);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
""));
        Ymin->setAlignment(Qt::AlignCenter);
        Xmin = new QLineEdit(centralwidget);
        Xmin->setObjectName("Xmin");
        Xmin->setGeometry(QRect(65, 341, 65, 16));
        Xmin->setFont(font);
        Xmin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: rgb(238, 162, 59);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
""));
        Xmin->setAlignment(Qt::AlignCenter);
        Ymax = new QLineEdit(centralwidget);
        Ymax->setObjectName("Ymax");
        Ymax->setGeometry(QRect(65, 358, 65, 16));
        Ymax->setFont(font);
        Ymax->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: rgb(238, 162, 59);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}\n"
""));
        Ymax->setAlignment(Qt::AlignCenter);
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(455, 0, 390, 390));
        label = new QLineEdit(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 455, 65));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: rgb(37, 41, 47);\n"
"  color: white; \n"
"  border: 1px solid rgb(36, 40, 45);\n"
"}"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setReadOnly(true);
        MainCalc->setCentralWidget(centralwidget);

        retranslateUi(MainCalc);

        QMetaObject::connectSlotsByName(MainCalc);
    } // setupUi

    void retranslateUi(QMainWindow *MainCalc)
    {
        MainCalc->setWindowTitle(QCoreApplication::translate("MainCalc", "MainCalc", nullptr));
        AC->setText(QCoreApplication::translate("MainCalc", "AC", nullptr));
#if QT_CONFIG(shortcut)
        AC->setShortcut(QCoreApplication::translate("MainCalc", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        left->setText(QCoreApplication::translate("MainCalc", "(", nullptr));
#if QT_CONFIG(shortcut)
        left->setShortcut(QCoreApplication::translate("MainCalc", "(", nullptr));
#endif // QT_CONFIG(shortcut)
        right->setText(QCoreApplication::translate("MainCalc", ")", nullptr));
#if QT_CONFIG(shortcut)
        right->setShortcut(QCoreApplication::translate("MainCalc", ")", nullptr));
#endif // QT_CONFIG(shortcut)
        mod->setText(QCoreApplication::translate("MainCalc", "%", nullptr));
#if QT_CONFIG(shortcut)
        mod->setShortcut(QCoreApplication::translate("MainCalc", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        sin->setText(QCoreApplication::translate("MainCalc", "sin", nullptr));
#if QT_CONFIG(shortcut)
        sin->setShortcut(QCoreApplication::translate("MainCalc", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        cos->setText(QCoreApplication::translate("MainCalc", "cos", nullptr));
#if QT_CONFIG(shortcut)
        cos->setShortcut(QCoreApplication::translate("MainCalc", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        push_7->setText(QCoreApplication::translate("MainCalc", "7", nullptr));
#if QT_CONFIG(shortcut)
        push_7->setShortcut(QCoreApplication::translate("MainCalc", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        push_8->setText(QCoreApplication::translate("MainCalc", "8", nullptr));
#if QT_CONFIG(shortcut)
        push_8->setShortcut(QCoreApplication::translate("MainCalc", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        pow->setText(QCoreApplication::translate("MainCalc", "^", nullptr));
#if QT_CONFIG(shortcut)
        pow->setShortcut(QCoreApplication::translate("MainCalc", "^", nullptr));
#endif // QT_CONFIG(shortcut)
        push_9->setText(QCoreApplication::translate("MainCalc", "9", nullptr));
#if QT_CONFIG(shortcut)
        push_9->setShortcut(QCoreApplication::translate("MainCalc", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        asin->setText(QCoreApplication::translate("MainCalc", "asin", nullptr));
#if QT_CONFIG(shortcut)
        asin->setShortcut(QCoreApplication::translate("MainCalc", "Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        div->setText(QCoreApplication::translate("MainCalc", "\303\267", nullptr));
#if QT_CONFIG(shortcut)
        div->setShortcut(QCoreApplication::translate("MainCalc", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        acos->setText(QCoreApplication::translate("MainCalc", "acos", nullptr));
#if QT_CONFIG(shortcut)
        acos->setShortcut(QCoreApplication::translate("MainCalc", "Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        push_4->setText(QCoreApplication::translate("MainCalc", "4", nullptr));
#if QT_CONFIG(shortcut)
        push_4->setShortcut(QCoreApplication::translate("MainCalc", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        push_2->setText(QCoreApplication::translate("MainCalc", "2", nullptr));
#if QT_CONFIG(shortcut)
        push_2->setShortcut(QCoreApplication::translate("MainCalc", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        push_6->setText(QCoreApplication::translate("MainCalc", "6", nullptr));
#if QT_CONFIG(shortcut)
        push_6->setShortcut(QCoreApplication::translate("MainCalc", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        tan->setText(QCoreApplication::translate("MainCalc", "tan", nullptr));
#if QT_CONFIG(shortcut)
        tan->setShortcut(QCoreApplication::translate("MainCalc", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        mult->setText(QCoreApplication::translate("MainCalc", "*", nullptr));
#if QT_CONFIG(shortcut)
        mult->setShortcut(QCoreApplication::translate("MainCalc", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        push_5->setText(QCoreApplication::translate("MainCalc", "5", nullptr));
#if QT_CONFIG(shortcut)
        push_5->setShortcut(QCoreApplication::translate("MainCalc", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        sqrt->setText(QCoreApplication::translate("MainCalc", "sqrt", nullptr));
#if QT_CONFIG(shortcut)
        sqrt->setShortcut(QCoreApplication::translate("MainCalc", "Q", nullptr));
#endif // QT_CONFIG(shortcut)
        push_1->setText(QCoreApplication::translate("MainCalc", "1", nullptr));
#if QT_CONFIG(shortcut)
        push_1->setShortcut(QCoreApplication::translate("MainCalc", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        push_3->setText(QCoreApplication::translate("MainCalc", "3", nullptr));
#if QT_CONFIG(shortcut)
        push_3->setShortcut(QCoreApplication::translate("MainCalc", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        minus->setText(QCoreApplication::translate("MainCalc", "-", nullptr));
#if QT_CONFIG(shortcut)
        minus->setShortcut(QCoreApplication::translate("MainCalc", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        log->setText(QCoreApplication::translate("MainCalc", "log", nullptr));
#if QT_CONFIG(shortcut)
        log->setShortcut(QCoreApplication::translate("MainCalc", "L", nullptr));
#endif // QT_CONFIG(shortcut)
        ln->setText(QCoreApplication::translate("MainCalc", "ln", nullptr));
#if QT_CONFIG(shortcut)
        ln->setShortcut(QCoreApplication::translate("MainCalc", "Shift+L", nullptr));
#endif // QT_CONFIG(shortcut)
        atan->setText(QCoreApplication::translate("MainCalc", "atan", nullptr));
#if QT_CONFIG(shortcut)
        atan->setShortcut(QCoreApplication::translate("MainCalc", "Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        push_x->setText(QCoreApplication::translate("MainCalc", "x", nullptr));
#if QT_CONFIG(shortcut)
        push_x->setShortcut(QCoreApplication::translate("MainCalc", "X", nullptr));
#endif // QT_CONFIG(shortcut)
        push_0->setText(QCoreApplication::translate("MainCalc", "0", nullptr));
#if QT_CONFIG(shortcut)
        push_0->setShortcut(QCoreApplication::translate("MainCalc", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        plus->setText(QCoreApplication::translate("MainCalc", "+", nullptr));
#if QT_CONFIG(shortcut)
        plus->setShortcut(QCoreApplication::translate("MainCalc", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        eq->setText(QCoreApplication::translate("MainCalc", "=", nullptr));
#if QT_CONFIG(shortcut)
        eq->setShortcut(QCoreApplication::translate("MainCalc", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        point->setText(QCoreApplication::translate("MainCalc", ".", nullptr));
#if QT_CONFIG(shortcut)
        point->setShortcut(QCoreApplication::translate("MainCalc", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        Graph->setText(QCoreApplication::translate("MainCalc", "Graph", nullptr));
        EnterX->setInputMask(QString());
        EnterX->setText(QString());
        EnterX->setPlaceholderText(QCoreApplication::translate("MainCalc", "Enter X", nullptr));
        Xmax->setInputMask(QString());
        Xmax->setText(QString());
        Xmax->setPlaceholderText(QCoreApplication::translate("MainCalc", "Xmax", nullptr));
        Ymin->setInputMask(QString());
        Ymin->setText(QString());
        Ymin->setPlaceholderText(QCoreApplication::translate("MainCalc", "Ymin", nullptr));
        Xmin->setInputMask(QString());
        Xmin->setText(QString());
        Xmin->setPlaceholderText(QCoreApplication::translate("MainCalc", "Xmin", nullptr));
        Ymax->setInputMask(QString());
        Ymax->setText(QString());
        Ymax->setPlaceholderText(QCoreApplication::translate("MainCalc", "Ymax", nullptr));
        label->setText(QCoreApplication::translate("MainCalc", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainCalc: public Ui_MainCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCALC_H
