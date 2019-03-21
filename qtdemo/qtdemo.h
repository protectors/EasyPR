#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtdemo.h"

class qtdemo : public QMainWindow
{
	Q_OBJECT

public:
	qtdemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::qtdemoClass ui;
};
