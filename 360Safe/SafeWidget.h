#pragma once

#include <QtWidgets/QWidget>
#include "ui_SafeWidget.h"

class SafeWidget : public QWidget
{
	Q_OBJECT

public:
	SafeWidget(QWidget *parent = Q_NULLPTR);

private:
	Ui::SafeWidgetClass ui;
};
