#pragma once
#include "centralWidget.h"
#include "ui_SearchResultWidget.h"
#include <QWidget>
#include <vector>

#include <windows.h>
#include <tlhelp32.h>

namespace Ui { class SearchResultWidget; };

class SearchResultWidget : public QWidget, public Ui::SearchResultWidget
{
	Q_OBJECT

public:
	SearchResultWidget(CentralWidget* parent, std::vector<PROCESSENTRY32>);
	~SearchResultWidget();

public slots:
	void selectProcess();

private:
	Ui::SearchResultWidget ui;
	QWindow* window;
	CentralWidget* parent;
	vector<PROCESSENTRY32> procList;
	int selectedItem;
};
