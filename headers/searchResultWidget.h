#pragma once

#include <QWidget>
#include <vector>

#include <windows.h>
#include <tlhelp32.h>

namespace Ui { class SearchResultWidget; };

class SearchResultWidget : public QWidget
{
	Q_OBJECT

public:
	SearchResultWidget(std::vector<PROCESSENTRY32>);
	~SearchResultWidget();

private:
	Ui::SearchResultWidget *ui;
	QWindow* window;
};
