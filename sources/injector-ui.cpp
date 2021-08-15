#include "injector-ui.h"

InjectorUi::InjectorUi(QWidget* parent)
	: QWidget(parent)
{
	setupUi(this);
	this->setFixedSize(QSize(width(), height()));
}



InjectorUi::~InjectorUi()
{
}
