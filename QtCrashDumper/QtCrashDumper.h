#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCrashDumper.h"

class QtCrashDumper : public QMainWindow
{
    Q_OBJECT

public:
    QtCrashDumper(QWidget *parent = Q_NULLPTR);
private slots:
	void on_crashBtn_clicked();
private:
    Ui::QtCrashDumperClass ui;
};
