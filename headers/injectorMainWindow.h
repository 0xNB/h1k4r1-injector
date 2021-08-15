#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_h1k4r1injector.h"

class InjectorMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    InjectorMainWindow(QWidget *parent = Q_NULLPTR);

private:
    Ui::h1k4r1injectorClass ui;
};
