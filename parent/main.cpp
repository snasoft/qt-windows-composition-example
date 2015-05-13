#include "parentwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ParentWidget w;
    w.show();

    return a.exec();
}
