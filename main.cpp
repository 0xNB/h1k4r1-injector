#include "h1k4r1injector.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    h1k4r1injector w;
    w.show();
    return a.exec();
}
