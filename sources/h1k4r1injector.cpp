#include "h1k4r1injector.h"
#include "ui_injector-ui.h"

h1k4r1injector::h1k4r1injector(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    // QWidget and parent setup
    QWidget* injectorWidget = new QWidget(this);
    Ui::InjectorWidget* injectorTransform = new Ui::InjectorWidget();
    
    injectorTransform->setupUi(injectorWidget);
    injectorTransform->retranslateUi(injectorWidget);

    injectorWidget->setMinimumSize(QSize(500, 500));
    layout()->addWidget(injectorWidget);
}
