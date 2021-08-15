#include "injector-ui.h"
#include "injectdialog.h"

InjectorUi::InjectorUi(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(QSize(width(), height()));
}

void InjectorUi::inject() {
	InjectDialog dialog(this);
	dialog.exec();
}

InjectorUi::~InjectorUi()
{
}
