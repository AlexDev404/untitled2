#include "mainwindow.h"
#include "ui_mainwindow.h"
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


void MainWindow::on_loadImage_clicked() {
    QPixmap photo("E:\\Data\\PROGRAMMING\\Qt\\untitled2\\photo.png");
    int width = ui->displayImage->width();
    int height = ui->displayImage->height();

    ui->displayImage->setPixmap(photo.scaled(width, height, Qt::KeepAspectRatio));
    QIcon bIcon(photo);

    ui->disImg->setIcon(bIcon);
    ui->disImg->setIconSize(QSize(300, 150));
}

void MainWindow::on_chk_toggled(bool checked)
{
    if(checked){
        // Display dialog
        QMessageBox msgBox;
        msgBox.setText("The document has been modified.");
        msgBox.exec();
    }
}

