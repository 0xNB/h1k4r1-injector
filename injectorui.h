#pragma once

#include <QWidget>
#include "ui_injectorui.h"

class injectorUi : public QWidget, public Ui::injectorUi
{
	Q_OBJECT

public:
	injectorUi(QWidget *parent = Q_NULLPTR);
	~injectorUi();
};
