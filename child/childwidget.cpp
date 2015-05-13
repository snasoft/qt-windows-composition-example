#include "childwidget.h"
#include "ui_childwidget.h"

#include <QDebug>

ChildWidget::ChildWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChildWidget)
{
    ui->setupUi(this);
    qDebug() << "ChildWidget winId:" << this->winId();
    this->setWindowFlags(Qt::FramelessWindowHint);
}

ChildWidget::~ChildWidget()
{
    delete ui;
}
