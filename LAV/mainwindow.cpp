#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("MSU-IIT LAV");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tutee_appointment_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_tutor_schedule_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_close_clicked()
{
    close();
}

