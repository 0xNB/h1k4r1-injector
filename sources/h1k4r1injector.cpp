#include "h1k4r1injector.h"
#include "injector-ui.h"

h1k4r1injector::h1k4r1injector(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    InjectorUi* injectorUi = new InjectorUi(this);
    setCentralWidget(injectorUi);
}
