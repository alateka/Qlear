// C++ Library
#include <iostream>

// QT Framework
#include <QDir>
#include <QMessageBox>

// Project files
#include "../about/aboutwindow.h"
#include "../../core/qlearcore.h"
#include "mainwindow.h"
#include "./ui_mainwindow.h"


QlearCore qlear(QSysInfo::kernelType());

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
    int resultMessageBox = QMessageBox::question(this, "WARNING", "This action will delete all applications cache from .cache directory. \n Are you sure?");

    if ( resultMessageBox == QMessageBox::Yes) {
        qlear.removeUserCache();
        ui->logsBox->setText("User cache removed");
    }
}


void MainWindow::on_actionAbout_triggered()
{
    AboutWindow aboutWindow;
    aboutWindow.setModal(true);
    aboutWindow.exec();
}

