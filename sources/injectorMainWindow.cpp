#include <QFile>

#include "injectorMainWindow.h"
#include "centralWidget.h"
#include "injectdialog.h"

InjectorMainWindow::InjectorMainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    ui.setupUi(this);

    CentralWidget* injectorUi = new CentralWidget(this);
    // set stylesheet
    QFile file(":/dark/stylesheet.qss");
    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream stream(&file);

    setStyleSheet(stream.readAll());
    setCentralWidget(injectorUi);
}
