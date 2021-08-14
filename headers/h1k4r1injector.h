#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_h1k4r1injector.h"

class h1k4r1injector : public QMainWindow
{
    Q_OBJECT

public:
    h1k4r1injector(QWidget *parent = Q_NULLPTR);

private:
    Ui::h1k4r1injectorClass ui;
};
