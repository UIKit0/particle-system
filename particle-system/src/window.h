#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include "app.h"

namespace Ui {
	class Window;
}

class Window : public QWidget
{
	Q_OBJECT

public:
	explicit Window(QWidget *parent = 0);
	~Window();

private:
	Ui::Window *ui;
	App app;
};

#endif // WINDOW_H
