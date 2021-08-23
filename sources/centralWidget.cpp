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
	ui.timeWastedLabel->setText(QString::fromStdString("Time wasted [s]"));
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
	OutputDebugStringA("[INFO] Inject button clicked\n");
	InjectionMethod injectionMethod(this->selectedProcess, this->dllName);
	try {
		injectionMethod.inject();
	}
	catch (std::runtime_error e) {
		OutputDebugStringA(e.what());
		OutputDebugStringA("\n");
	}
	InjectDialog dialog(this);
	dialog.exec();
}

void CentralWidget::search() {
	QTextEdit* processNameTextbox = ui.programNameTextbox;;
	QString procNamePattern = processNameTextbox->toPlainText();

	vector<PROCESSENTRY32> foundStrings = processSearcher.searchProcessByName(procNamePattern.toStdString());
	SearchResultWidget* searchResults = new SearchResultWidget(this, foundStrings);
	searchResults->show();
}

void CentralWidget::searchById() {
	QTextEdit* procIdTextBox = ui.processIdTextEdit;;
	QString procId = procIdTextBox->toPlainText();

	vector<PROCESSENTRY32> foundStrings = processSearcher.searchByProcessId(procId.toStdString());
	SearchResultWidget* searchResults = new SearchResultWidget(this, foundStrings);
	searchResults->show();
}

void CentralWidget::setSelectedProcess(PROCESSENTRY32 process)
{
	this->selectedProcess = process;
	std::wstring procWstring = std::wstring(process.szExeFile);
	std::string procString = std::string(procWstring.begin(), procWstring.end());

	std::string displayed = "[";
	displayed += std::to_string(process.th32ProcessID);
	displayed += "] ";
	displayed += procString;

	this->ui.foundProcessLabel->setText(QString::fromStdString(displayed));
	this->ui.processIdTextEdit->setText(QString::fromStdString(std::to_string(process.th32ProcessID)));
	this->ui.programNameTextbox->setText(QString::fromStdString(displayed));
}

void CentralWidget::selectFile()
{
	QFileDialog dialog(this);
	dialog.setFileMode(QFileDialog::AnyFile);
	QString fileName = dialog.getOpenFileName();

	this->dllName = fileName.toStdString().c_str();
	this->ui.selectedFileText->setText(fileName);
}

CentralWidget::~CentralWidget()
{
}
