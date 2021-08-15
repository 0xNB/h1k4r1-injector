#pragma once

#include <QWidget>
#include "ui_previewwidget.h"

class previewWidget : public QWidget, public Ui::previewWidget
{
	Q_OBJECT

public:
	previewWidget(QWidget *parent = Q_NULLPTR);
	~previewWidget();
};
