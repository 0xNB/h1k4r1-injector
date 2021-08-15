#include "centralWidget.h"
#include "injectdialog.h"
#include <QFile>
#include <QTextStream>
#include <qtimer.h>

CentralWidget::CentralWidget(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->timeWasted = 0;
	this->setFixedSize(QSize(width(), height()));
	startClock();
}

void CentralWidget::startClock() {
	QTimer* timer = new QTimer(this);
	connect(timer, &QTimer::timeout, this, &CentralWidget::updateTime);
	timer->start(1000);
	updateTime();
}

void CentralWidget::updateTime() {
	ui.timeWastedLCD->display(QString::fromStdString(std::to_string(this->timeWasted)));
	this->timeWasted = this->timeWasted + 1;
}

void CentralWidget::inject() {
	InjectDialog dialog(this);
	dialog.exec();
}

CentralWidget::~CentralWidget()
{
}