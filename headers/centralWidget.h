#pragma once

#include <QWidget>
#include <qfiledialog.h>
#include "ui_injector-ui.h"
#include "InjectionMethods/InjectionMethod.h"
#include "ProcessSearcher.h"

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
	void searchById();
	void setSelectedProcess(PROCESSENTRY32 process);
	void selectFile();

private:
	Ui::InjectorWidget ui;
	int timeWasted;
	ProcessSearcher processSearcher;
	PROCESSENTRY32 selectedProcess;
	const char* dllName;
};

