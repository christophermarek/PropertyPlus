#include "creatorwindow.h"
#include "ui_creatorwindow.h"

creatorWindow::creatorWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::creatorWindow)
{
    ui->setupUi(this);
}

creatorWindow::~creatorWindow()
{
    delete ui;
}
