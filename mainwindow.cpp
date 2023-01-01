// C++ Library
#include <iostream>

// QT Framework
#include <QDir>
#include <QMessageBox>

// Project files
#include "qlearlib.h"
#include "mainwindow.h"
#include "./ui_mainwindow.h"


QDir home(QDir::home());
QDir cache(home.absolutePath()+"/.cache");

QlearLib qlear(home, cache);

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

void MainWindow::on_homeCacheBtn_clicked()
{
    if ( QMessageBox::question(this, "WARNING", "Do you are sure?") == QMessageBox::Yes ) {
        qlear.removeUserCache();
        ui->logsBox->setText("User cache removed");
    }
}

void MainWindow::on_menuBtn_clicked()
{
    ui->logsBox->setText(qlear.getOS());
}

