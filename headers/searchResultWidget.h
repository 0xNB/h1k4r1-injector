#pragma once

#include <QWidget>
namespace Ui { class SearchResultWidget; };

class SearchResultWidget : public QWidget
{
	Q_OBJECT

public:
	SearchResultWidget(QWidget *parent = Q_NULLPTR);
	~SearchResultWidget();

private:
	Ui::SearchResultWidget *ui;
};
