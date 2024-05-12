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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QLabel *label1;
    QLineEdit *fullname1;
    QLabel *label2;
    QLineEdit *idnumber1;
    QLabel *label3;
    QLineEdit *coursecode1;
    QSpinBox *yearlevel1;
    QLabel *label4;
    QLabel *label5;
    QLineEdit *tutorid1;
    QLabel *label6;
    QLabel *label7;
    QLineEdit *date1;
    QLabel *label8;
    QLineEdit *timestart1;
    QLabel *label9;
    QLineEdit *timeend1;
    QComboBox *subject1;
    QPushButton *pushButton;
    QTableWidget *tableWidget_2;
    QLineEdit *searchline2_2;
    QPushButton *search2_2;
    QWidget *page2;
    QLineEdit *idnumber2;
    QLabel *label15;
    QLabel *label12;
    QLabel *label11;
    QLineEdit *timeend2;
    QLabel *label14;
    QLabel *label10;
    QLineEdit *date2;
    QLineEdit *fullname2;
    QLabel *label13;
    QLineEdit *timestart2;
    QComboBox *subject2;
    QPushButton *search2;
    QLineEdit *searchline2;
    QTableWidget *tableWidget;
    QPushButton *delete2;
    QPushButton *add2;
    QPushButton *edit2;
    QPushButton *save2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *tutee_appointment;
    QPushButton *tutor_schedule;
    QSpacerItem *verticalSpacer;
    QPushButton *close;
    QFrame *frame;
    QFrame *frame_2;
    QPushButton *add1;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1379, 714);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(150, 50, 1231, 500));
        page1 = new QWidget();
        page1->setObjectName("page1");
        label1 = new QLabel(page1);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(40, 100, 101, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setBold(true);
        label1->setFont(font);
        fullname1 = new QLineEdit(page1);
        fullname1->setObjectName("fullname1");
        fullname1->setGeometry(QRect(40, 120, 231, 21));
        fullname1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label2 = new QLabel(page1);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(40, 150, 101, 21));
        label2->setFont(font);
        idnumber1 = new QLineEdit(page1);
        idnumber1->setObjectName("idnumber1");
        idnumber1->setGeometry(QRect(40, 170, 231, 21));
        idnumber1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label3 = new QLabel(page1);
        label3->setObjectName("label3");
        label3->setGeometry(QRect(40, 200, 101, 21));
        label3->setFont(font);
        coursecode1 = new QLineEdit(page1);
        coursecode1->setObjectName("coursecode1");
        coursecode1->setGeometry(QRect(40, 270, 231, 21));
        coursecode1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        yearlevel1 = new QSpinBox(page1);
        yearlevel1->setObjectName("yearlevel1");
        yearlevel1->setGeometry(QRect(40, 220, 231, 21));
        yearlevel1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        yearlevel1->setMinimum(1);
        yearlevel1->setMaximum(4);
        label4 = new QLabel(page1);
        label4->setObjectName("label4");
        label4->setGeometry(QRect(40, 250, 101, 21));
        label4->setFont(font);
        label5 = new QLabel(page1);
        label5->setObjectName("label5");
        label5->setGeometry(QRect(40, 300, 101, 21));
        label5->setFont(font);
        tutorid1 = new QLineEdit(page1);
        tutorid1->setObjectName("tutorid1");
        tutorid1->setGeometry(QRect(40, 320, 231, 21));
        tutorid1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label6 = new QLabel(page1);
        label6->setObjectName("label6");
        label6->setGeometry(QRect(40, 350, 101, 21));
        label6->setFont(font);
        label7 = new QLabel(page1);
        label7->setObjectName("label7");
        label7->setGeometry(QRect(40, 400, 101, 21));
        label7->setFont(font);
        date1 = new QLineEdit(page1);
        date1->setObjectName("date1");
        date1->setGeometry(QRect(40, 420, 231, 21));
        date1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label8 = new QLabel(page1);
        label8->setObjectName("label8");
        label8->setGeometry(QRect(40, 450, 101, 21));
        label8->setFont(font);
        timestart1 = new QLineEdit(page1);
        timestart1->setObjectName("timestart1");
        timestart1->setGeometry(QRect(40, 470, 111, 21));
        timestart1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label9 = new QLabel(page1);
        label9->setObjectName("label9");
        label9->setGeometry(QRect(160, 450, 101, 21));
        label9->setFont(font);
        timeend1 = new QLineEdit(page1);
        timeend1->setObjectName("timeend1");
        timeend1->setGeometry(QRect(160, 470, 111, 21));
        timeend1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        subject1 = new QComboBox(page1);
        subject1->setObjectName("subject1");
        subject1->setGeometry(QRect(40, 370, 231, 21));
        subject1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        pushButton = new QPushButton(page1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 500, 83, 21));
        tableWidget_2 = new QTableWidget(page1);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(370, 90, 791, 461));
        searchline2_2 = new QLineEdit(page1);
        searchline2_2->setObjectName("searchline2_2");
        searchline2_2->setGeometry(QRect(370, 50, 681, 21));
        search2_2 = new QPushButton(page1);
        search2_2->setObjectName("search2_2");
        search2_2->setGeometry(QRect(1070, 50, 83, 21));
        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName("page2");
        idnumber2 = new QLineEdit(page2);
        idnumber2->setObjectName("idnumber2");
        idnumber2->setGeometry(QRect(40, 170, 231, 21));
        idnumber2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label15 = new QLabel(page2);
        label15->setObjectName("label15");
        label15->setGeometry(QRect(160, 300, 101, 21));
        label15->setFont(font);
        label12 = new QLabel(page2);
        label12->setObjectName("label12");
        label12->setGeometry(QRect(40, 200, 101, 21));
        label12->setFont(font);
        label11 = new QLabel(page2);
        label11->setObjectName("label11");
        label11->setGeometry(QRect(40, 150, 101, 21));
        label11->setFont(font);
        timeend2 = new QLineEdit(page2);
        timeend2->setObjectName("timeend2");
        timeend2->setGeometry(QRect(160, 320, 111, 21));
        timeend2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label14 = new QLabel(page2);
        label14->setObjectName("label14");
        label14->setGeometry(QRect(40, 300, 101, 21));
        label14->setFont(font);
        label10 = new QLabel(page2);
        label10->setObjectName("label10");
        label10->setGeometry(QRect(40, 100, 101, 21));
        label10->setFont(font);
        date2 = new QLineEdit(page2);
        date2->setObjectName("date2");
        date2->setGeometry(QRect(40, 270, 231, 21));
        date2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        fullname2 = new QLineEdit(page2);
        fullname2->setObjectName("fullname2");
        fullname2->setGeometry(QRect(40, 120, 231, 21));
        fullname2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label13 = new QLabel(page2);
        label13->setObjectName("label13");
        label13->setGeometry(QRect(40, 250, 101, 21));
        label13->setFont(font);
        timestart2 = new QLineEdit(page2);
        timestart2->setObjectName("timestart2");
        timestart2->setGeometry(QRect(40, 320, 111, 21));
        timestart2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        subject2 = new QComboBox(page2);
        subject2->setObjectName("subject2");
        subject2->setGeometry(QRect(40, 220, 231, 21));
        subject2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        search2 = new QPushButton(page2);
        search2->setObjectName("search2");
        search2->setGeometry(QRect(1070, 50, 83, 21));
        searchline2 = new QLineEdit(page2);
        searchline2->setObjectName("searchline2");
        searchline2->setGeometry(QRect(370, 50, 681, 21));
        tableWidget = new QTableWidget(page2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(370, 90, 791, 461));
        delete2 = new QPushButton(page2);
        delete2->setObjectName("delete2");
        delete2->setGeometry(QRect(200, 350, 74, 21));
        add2 = new QPushButton(page2);
        add2->setObjectName("add2");
        add2->setEnabled(true);
        add2->setGeometry(QRect(280, 350, 74, 21));
        edit2 = new QPushButton(page2);
        edit2->setObjectName("edit2");
        edit2->setGeometry(QRect(40, 350, 74, 21));
        save2 = new QPushButton(page2);
        save2->setObjectName("save2");
        save2->setEnabled(true);
        save2->setGeometry(QRect(120, 350, 74, 21));
        stackedWidget->addWidget(page2);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 40, 161, 631));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(-10, 120, 161, 491));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 0, 0, 0);
        tutee_appointment = new QPushButton(layoutWidget);
        tutee_appointment->setObjectName("tutee_appointment");

        verticalLayout->addWidget(tutee_appointment);

        tutor_schedule = new QPushButton(layoutWidget);
        tutor_schedule->setObjectName("tutor_schedule");
        tutor_schedule->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(tutor_schedule);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        close = new QPushButton(layoutWidget);
        close->setObjectName("close");

        verticalLayout->addWidget(close);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1381, 41));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 79, 166);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 670, 1381, 41));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 79, 166);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        add1 = new QPushButton(centralwidget);
        add1->setObjectName("add1");
        add1->setEnabled(true);
        add1->setGeometry(QRect(350, 550, 74, 21));
        MainWindow->setCentralWidget(centralwidget);
        groupBox->raise();
        stackedWidget->raise();
        frame->raise();
        frame_2->raise();
        add1->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1379, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "Full Name", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "I.D. Number", nullptr));
        idnumber1->setPlaceholderText(QCoreApplication::translate("MainWindow", "2022-0000", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", "Year Level", nullptr));
        coursecode1->setPlaceholderText(QCoreApplication::translate("MainWindow", "BSCS", nullptr));
        label4->setText(QCoreApplication::translate("MainWindow", " Course Code", nullptr));
        label5->setText(QCoreApplication::translate("MainWindow", "Tutor I.D.", nullptr));
        tutorid1->setPlaceholderText(QCoreApplication::translate("MainWindow", "2022-0000", nullptr));
        label6->setText(QCoreApplication::translate("MainWindow", "Subject", nullptr));
        label7->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label8->setText(QCoreApplication::translate("MainWindow", "Time Start", nullptr));
        label9->setText(QCoreApplication::translate("MainWindow", "Time End", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        search2_2->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        idnumber2->setPlaceholderText(QCoreApplication::translate("MainWindow", "2000-0000", nullptr));
        label15->setText(QCoreApplication::translate("MainWindow", "Time End", nullptr));
        label12->setText(QCoreApplication::translate("MainWindow", "Subject", nullptr));
        label11->setText(QCoreApplication::translate("MainWindow", "I.D. Number", nullptr));
        label14->setText(QCoreApplication::translate("MainWindow", "Time Start", nullptr));
        label10->setText(QCoreApplication::translate("MainWindow", "Full Name", nullptr));
        label13->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        search2->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        delete2->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        add2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        edit2->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        save2->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        groupBox->setTitle(QString());
        tutee_appointment->setText(QCoreApplication::translate("MainWindow", "Tutee Appointment", nullptr));
        tutor_schedule->setText(QCoreApplication::translate("MainWindow", "Tutor Schedule", nullptr));
        close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        add1->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
