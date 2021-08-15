#include "injectorMainWindow.h"
#include "injector-ui.h"
#include "injectdialog.h"

InjectorMainWindow::InjectorMainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    InjectorUi* injectorUi = new InjectorUi(this);
    setCentralWidget(injectorUi);
}
