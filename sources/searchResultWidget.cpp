#include "searchResultWidget.h"
#include "ui_SearchResultWidget.h"

SearchResultWidget::SearchResultWidget(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::SearchResultWidget();
	ui->setupUi(this);
}

SearchResultWidget::~SearchResultWidget()
{
	delete ui;
}
