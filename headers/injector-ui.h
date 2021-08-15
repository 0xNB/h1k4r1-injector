#pragma once

#include <QWidget>
#include "ui_injector-ui.h"

class InjectorUi : public QWidget, public Ui::InjectorWidget
{
	Q_OBJECT

public:
	InjectorUi(QWidget* parent = Q_NULLPTR);
	~InjectorUi();

public slots:
	void inject();

private:
	void on_injectButton_clicked();
	Ui::InjectorWidget ui;
};

