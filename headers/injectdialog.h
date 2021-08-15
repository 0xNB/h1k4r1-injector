#pragma once

#include <QDialog>
#include "ui_injectdialog.h"

class InjectDialog : public QDialog, public Ui::InjectDialog
{
	Q_OBJECT

public:
	InjectDialog(QWidget *parent = Q_NULLPTR);
	~InjectDialog();

private: 
	Ui::InjectDialog ui;
};
	