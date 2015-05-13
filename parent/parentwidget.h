#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>

namespace Ui {
class ParentWidget;
}

class ParentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ParentWidget(QWidget *parent = 0);
    ~ParentWidget();

private:
    Ui::ParentWidget *ui;
    QWidget *childWidget;

private slots:
    void integrate();

protected:
    void resizeEvent(QResizeEvent * event);
};

#endif // PARENTWIDGET_H
