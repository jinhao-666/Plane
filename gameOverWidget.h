
#ifndef GAMEOVERWIDGET_H
#define GAMEOVERWIDGET_H

#include "global.h"
#include "themeWidget.h"

#include <QWidget>


class GameOverWidget : public QWidget
{
    Q_OBJECT
private:

    ThemeWidget* themeWidget;

    int credit;
    int level;
    QPushButton* playerButton;
    QPushButton* touristsButton;


    QLabel *IconShow;
    QLabel *creditShow;
    QLabel *modeShow;

    QPushButton* submitButton;
    QPushButton* cancelButton;
    QLabel *userName;
    QLineEdit *lineEdit;


public:
     GameOverWidget(QWidget* mainMenu, int credit ,int level,QWidget *parent = 0);

signals:
    void over();

public slots:
    void playerButtonClicked();
    void submitButtonClicked();
    void cancelButtonClicked();


};

#endif // GAMEOVERWIDGET_H

