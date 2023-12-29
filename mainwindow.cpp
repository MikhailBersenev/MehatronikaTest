#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cubignumberadder.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()) {
        QMessageBox::critical(this, "Ошибка", "Пустое поле");
        return;
    }
    CUBigNumberAdder uBigNumberAdder(this);
    uBigNumberAdder.setAddentNumbers(ui->lineEdit->text(), ui->lineEdit_2->text());
    QMessageBox::information(this, "Результат", "Результат сложения равен " +  uBigNumberAdder.calculateNumbers());

}

