#include "childwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChildWidget w;
    w.show();

    return a.exec();
}
