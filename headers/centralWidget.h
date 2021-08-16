#pragma once

#include <QWidget>
#include "ui_injector-ui.h"

class CentralWidget : public QWidget, public Ui::InjectorWidget
{
	Q_OBJECT

public:
	CentralWidget(QWidget* parent = Q_NULLPTR);
	void startClock();
	void updateTime();
	~CentralWidget();

public slots:
	void inject();
	void search();

private:
	Ui::InjectorWidget ui;
	int timeWasted;
};

