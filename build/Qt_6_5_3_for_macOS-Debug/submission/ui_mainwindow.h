/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *l_memory;
    QLabel *l_result;
    QLabel *l_formula;
    QGridLayout *gridLayout_2;
    QPushButton *pb_nine;
    QPushButton *pb_four;
    QPushButton *pb_memory_clear;
    QPushButton *pb_division;
    QPushButton *pb_seven;
    QPushButton *pb_clear;
    QPushButton *pb_save_number;
    QPushButton *pb_eight;
    QPushButton *pb_pow;
    QPushButton *pb_multiply;
    QPushButton *pb_memory_read;
    QPushButton *pb_change_of_sign;
    QPushButton *pb_one;
    QPushButton *pb_dot;
    QPushButton *pb_five;
    QPushButton *pb_six;
    QPushButton *pb_substraction;
    QPushButton *pb_two;
    QPushButton *pb_zero;
    QPushButton *pb_three;
    QPushButton *pb_add;
    QPushButton *pb_result;
    QPushButton *pb_delete;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(305, 412);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        l_memory = new QLabel(centralwidget);
        l_memory->setObjectName("l_memory");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(l_memory->sizePolicy().hasHeightForWidth());
        l_memory->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(l_memory);

        l_result = new QLabel(centralwidget);
        l_result->setObjectName("l_result");
        sizePolicy1.setHeightForWidth(l_result->sizePolicy().hasHeightForWidth());
        l_result->setSizePolicy(sizePolicy1);
        l_result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(l_result);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        l_formula = new QLabel(centralwidget);
        l_formula->setObjectName("l_formula");
        sizePolicy1.setHeightForWidth(l_formula->sizePolicy().hasHeightForWidth());
        l_formula->setSizePolicy(sizePolicy1);
        l_formula->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(l_formula, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pb_nine = new QPushButton(centralwidget);
        pb_nine->setObjectName("pb_nine");
        sizePolicy1.setHeightForWidth(pb_nine->sizePolicy().hasHeightForWidth());
        pb_nine->setSizePolicy(sizePolicy1);
        pb_nine->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_nine, 2, 2, 1, 1);

        pb_four = new QPushButton(centralwidget);
        pb_four->setObjectName("pb_four");
        sizePolicy1.setHeightForWidth(pb_four->sizePolicy().hasHeightForWidth());
        pb_four->setSizePolicy(sizePolicy1);
        pb_four->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_four, 3, 0, 1, 1);

        pb_memory_clear = new QPushButton(centralwidget);
        pb_memory_clear->setObjectName("pb_memory_clear");
        sizePolicy1.setHeightForWidth(pb_memory_clear->sizePolicy().hasHeightForWidth());
        pb_memory_clear->setSizePolicy(sizePolicy1);
        pb_memory_clear->setMinimumSize(QSize(40, 35));

        gridLayout_2->addWidget(pb_memory_clear, 0, 0, 1, 1);

        pb_division = new QPushButton(centralwidget);
        pb_division->setObjectName("pb_division");
        sizePolicy1.setHeightForWidth(pb_division->sizePolicy().hasHeightForWidth());
        pb_division->setSizePolicy(sizePolicy1);
        pb_division->setMinimumSize(QSize(50, 50));

        gridLayout_2->addWidget(pb_division, 1, 3, 1, 1);

        pb_seven = new QPushButton(centralwidget);
        pb_seven->setObjectName("pb_seven");
        sizePolicy1.setHeightForWidth(pb_seven->sizePolicy().hasHeightForWidth());
        pb_seven->setSizePolicy(sizePolicy1);
        pb_seven->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_seven, 2, 0, 1, 1);

        pb_clear = new QPushButton(centralwidget);
        pb_clear->setObjectName("pb_clear");
        sizePolicy1.setHeightForWidth(pb_clear->sizePolicy().hasHeightForWidth());
        pb_clear->setSizePolicy(sizePolicy1);
        pb_clear->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_clear, 1, 0, 1, 2);

        pb_save_number = new QPushButton(centralwidget);
        pb_save_number->setObjectName("pb_save_number");
        sizePolicy1.setHeightForWidth(pb_save_number->sizePolicy().hasHeightForWidth());
        pb_save_number->setSizePolicy(sizePolicy1);
        pb_save_number->setMinimumSize(QSize(40, 35));

        gridLayout_2->addWidget(pb_save_number, 0, 2, 1, 1);

        pb_eight = new QPushButton(centralwidget);
        pb_eight->setObjectName("pb_eight");
        sizePolicy1.setHeightForWidth(pb_eight->sizePolicy().hasHeightForWidth());
        pb_eight->setSizePolicy(sizePolicy1);
        pb_eight->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_eight, 2, 1, 1, 1);

        pb_pow = new QPushButton(centralwidget);
        pb_pow->setObjectName("pb_pow");
        sizePolicy1.setHeightForWidth(pb_pow->sizePolicy().hasHeightForWidth());
        pb_pow->setSizePolicy(sizePolicy1);
        pb_pow->setMinimumSize(QSize(50, 35));

        gridLayout_2->addWidget(pb_pow, 0, 3, 1, 1);

        pb_multiply = new QPushButton(centralwidget);
        pb_multiply->setObjectName("pb_multiply");
        sizePolicy1.setHeightForWidth(pb_multiply->sizePolicy().hasHeightForWidth());
        pb_multiply->setSizePolicy(sizePolicy1);
        pb_multiply->setMinimumSize(QSize(50, 50));

        gridLayout_2->addWidget(pb_multiply, 2, 3, 1, 1);

        pb_memory_read = new QPushButton(centralwidget);
        pb_memory_read->setObjectName("pb_memory_read");
        sizePolicy1.setHeightForWidth(pb_memory_read->sizePolicy().hasHeightForWidth());
        pb_memory_read->setSizePolicy(sizePolicy1);
        pb_memory_read->setMinimumSize(QSize(40, 35));

        gridLayout_2->addWidget(pb_memory_read, 0, 1, 1, 1);

        pb_change_of_sign = new QPushButton(centralwidget);
        pb_change_of_sign->setObjectName("pb_change_of_sign");
        sizePolicy1.setHeightForWidth(pb_change_of_sign->sizePolicy().hasHeightForWidth());
        pb_change_of_sign->setSizePolicy(sizePolicy1);
        pb_change_of_sign->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_change_of_sign, 1, 2, 1, 1);

        pb_one = new QPushButton(centralwidget);
        pb_one->setObjectName("pb_one");
        sizePolicy1.setHeightForWidth(pb_one->sizePolicy().hasHeightForWidth());
        pb_one->setSizePolicy(sizePolicy1);
        pb_one->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_one, 4, 0, 1, 1);

        pb_dot = new QPushButton(centralwidget);
        pb_dot->setObjectName("pb_dot");
        sizePolicy1.setHeightForWidth(pb_dot->sizePolicy().hasHeightForWidth());
        pb_dot->setSizePolicy(sizePolicy1);
        pb_dot->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_dot, 5, 0, 1, 1);

        pb_five = new QPushButton(centralwidget);
        pb_five->setObjectName("pb_five");
        sizePolicy1.setHeightForWidth(pb_five->sizePolicy().hasHeightForWidth());
        pb_five->setSizePolicy(sizePolicy1);
        pb_five->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_five, 3, 1, 1, 1);

        pb_six = new QPushButton(centralwidget);
        pb_six->setObjectName("pb_six");
        sizePolicy1.setHeightForWidth(pb_six->sizePolicy().hasHeightForWidth());
        pb_six->setSizePolicy(sizePolicy1);
        pb_six->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_six, 3, 2, 1, 1);

        pb_substraction = new QPushButton(centralwidget);
        pb_substraction->setObjectName("pb_substraction");
        sizePolicy1.setHeightForWidth(pb_substraction->sizePolicy().hasHeightForWidth());
        pb_substraction->setSizePolicy(sizePolicy1);
        pb_substraction->setMinimumSize(QSize(50, 50));

        gridLayout_2->addWidget(pb_substraction, 3, 3, 1, 1);

        pb_two = new QPushButton(centralwidget);
        pb_two->setObjectName("pb_two");
        sizePolicy1.setHeightForWidth(pb_two->sizePolicy().hasHeightForWidth());
        pb_two->setSizePolicy(sizePolicy1);
        pb_two->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_two, 4, 1, 1, 1);

        pb_zero = new QPushButton(centralwidget);
        pb_zero->setObjectName("pb_zero");
        sizePolicy1.setHeightForWidth(pb_zero->sizePolicy().hasHeightForWidth());
        pb_zero->setSizePolicy(sizePolicy1);
        pb_zero->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_zero, 5, 1, 1, 1);

        pb_three = new QPushButton(centralwidget);
        pb_three->setObjectName("pb_three");
        sizePolicy1.setHeightForWidth(pb_three->sizePolicy().hasHeightForWidth());
        pb_three->setSizePolicy(sizePolicy1);
        pb_three->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_three, 4, 2, 1, 1);

        pb_add = new QPushButton(centralwidget);
        pb_add->setObjectName("pb_add");
        sizePolicy1.setHeightForWidth(pb_add->sizePolicy().hasHeightForWidth());
        pb_add->setSizePolicy(sizePolicy1);
        pb_add->setMinimumSize(QSize(50, 50));

        gridLayout_2->addWidget(pb_add, 4, 3, 1, 1);

        pb_result = new QPushButton(centralwidget);
        pb_result->setObjectName("pb_result");
        sizePolicy1.setHeightForWidth(pb_result->sizePolicy().hasHeightForWidth());
        pb_result->setSizePolicy(sizePolicy1);
        pb_result->setMinimumSize(QSize(50, 50));
        pb_result->setBaseSize(QSize(60, 0));

        gridLayout_2->addWidget(pb_result, 5, 3, 1, 1);

        pb_delete = new QPushButton(centralwidget);
        pb_delete->setObjectName("pb_delete");
        sizePolicy1.setHeightForWidth(pb_delete->sizePolicy().hasHeightForWidth());
        pb_delete->setSizePolicy(sizePolicy1);
        pb_delete->setMinimumSize(QSize(40, 50));

        gridLayout_2->addWidget(pb_delete, 5, 2, 1, 1);

        gridLayout_2->setRowStretch(5, 1);
        gridLayout_2->setColumnStretch(3, 1);
        gridLayout_2->setColumnMinimumWidth(3, 1);
        gridLayout_2->setRowMinimumHeight(1, 1);
        gridLayout_2->setRowMinimumHeight(4, 1);

        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        l_memory->setText(QString());
        l_result->setText(QString());
        l_formula->setText(QString());
        pb_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pb_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pb_memory_clear->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        pb_division->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pb_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pb_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pb_save_number->setText(QCoreApplication::translate("MainWindow", "MS", nullptr));
        pb_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pb_pow->setText(QCoreApplication::translate("MainWindow", "x\312\270", nullptr));
        pb_multiply->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pb_memory_read->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        pb_change_of_sign->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        pb_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pb_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pb_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pb_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pb_substraction->setText(QCoreApplication::translate("MainWindow", "\342\210\222", nullptr));
        pb_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pb_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pb_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pb_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pb_result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pb_delete->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
