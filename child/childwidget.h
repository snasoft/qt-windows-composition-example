#ifndef CHILDWIDGET_H
#define CHILDWIDGET_H

#include <QWidget>

namespace Ui {
class ChildWidget;
}

class ChildWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ChildWidget(QWidget *parent = 0);
    ~ChildWidget();

private:
    Ui::ChildWidget *ui;
};

#endif // CHILDWIDGET_H
