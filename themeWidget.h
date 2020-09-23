#ifndef THEMEWIDGET_H
#define THEMEWIDGET_H

#include <QWidget>
#include "global.h"
#include <QFont>

class ThemeWidget : public QWidget
{
    Q_OBJECT

private:
    QLabel *aircraftLabel;
    QLabel *battleLabel;
    QLabel *flyer1;
    QLabel *flyer2;
    QLabel *flyer3;
    QLabel *backgroundLabel;

    int id;
    bool judge;

public:
    ThemeWidget(QWidget *parent = 0);
protected:
    void timerEvent(QTimerEvent* event);

};

#endif // THEMEWIDGET_H
