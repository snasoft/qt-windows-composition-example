#include "parentwidget.h"
#include "ui_parentwidget.h"

#include <QWindow>

ParentWidget::ParentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParentWidget),
    childWidget(NULL)
{
    ui->setupUi(this);


    connect(ui->integrateWidgetBtn, SIGNAL(clicked(bool)), this, SLOT(integrate()));
}

ParentWidget::~ParentWidget()
{
    delete ui;
}

void ParentWidget::integrate()
{
    int childWidgetWinId = ; //get from debug output

    QWindow *childWindow = QWindow::fromWinId( childWidgetWinId );

    childWidget = QWidget::createWindowContainer(childWindow, this, Qt::Widget );

    ui->childWidgetLayout->addWidget(childWidget);
}

