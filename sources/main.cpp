#include "injectorMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InjectorMainWindow w;
    w.show();
    return a.exec();
}
