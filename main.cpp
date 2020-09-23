#include "mainMenuWidget.h"
#include "newGameWidget.h"
#include "themeWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainMenuWidget* mainMenuWidget;
    mainMenuWidget=new MainMenuWidget();
    mainMenuWidget->show();
    return a.exec();
}

