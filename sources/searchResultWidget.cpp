#include "searchResultWidget.h"
#include "ui_SearchResultWidget.h"
#include <qfile.h>

SearchResultWidget::SearchResultWidget(std::vector<PROCESSENTRY32> procList)
	: QWidget()
{
	ui = new Ui::SearchResultWidget();
	ui->setupUi(this);

	// set stylesheet
	QFile file(":/dark/stylesheet.qss");
	file.open(QFile::ReadOnly | QFile::Text);
	QTextStream stream(&file);

	setStyleSheet(stream.readAll());
	show();
}

SearchResultWidget::~SearchResultWidget()
{
	delete ui;
	delete window;
}
