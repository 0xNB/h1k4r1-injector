#include "injectDialog.h"

InjectDialog::InjectDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.injectionProgressLabel->setText(QString("some test"));

}

InjectDialog::~InjectDialog()
{
}
