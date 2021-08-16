#include "centralWidget.h"
#include "injectdialog.h"
#include "searchResultWidget.h"
#include <QFile>
#include <QTextStream>
#include <qtimer.h>
#include <string>

CentralWidget::CentralWidget(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->timeWasted = 0;
	startClock();
	this->setFixedSize(QSize(width() + 50, height()));
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

void CentralWidget::search() {
	QTextEdit* processNameTextbox = ui.programNameTextbox;;
	QString procNamePattern = processNameTextbox->toPlainText();

	vector<PROCESSENTRY32> foundStrings = processSearcher.searchProcessByName(procNamePattern.toStdString());
	SearchResultWidget* searchResults = new SearchResultWidget(foundStrings);
	searchResults->show();
}

CentralWidget::~CentralWidget()
{
}
