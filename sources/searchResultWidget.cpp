#include "searchResultWidget.h"
#include "ui_SearchResultWidget.h"
#include <qfile.h>
#include <string>

SearchResultWidget::SearchResultWidget(CentralWidget* parent, std::vector<PROCESSENTRY32> procList) : QWidget()
{
	ui.setupUi(this);
	ui.retranslateUi(this);

	this->parent = parent;
	this->procList = procList;
	this->selectedItem = 0;

	this->setWindowTitle("Process Search Results");

	for (int i = 0; i < procList.size(); i++) {
		std::wstring procWstring = std::wstring(procList[i].szExeFile);
		std::string procString = std::string(procWstring.begin(), procWstring.end());

		std::string displayed = "[";
		displayed += std::to_string(procList[i].th32ProcessID);
		displayed += "] ";
		displayed += procString;
		ui.processList->addItem(QString::fromStdString(displayed));
	}
	show();
}

void SearchResultWidget::selectProcess() {
	int selectedId = ui.processList->currentRow();
	parent->setSelectedProcess(procList[selectedId]);

	this->close();
}

SearchResultWidget::~SearchResultWidget()
{
	delete window;
}
