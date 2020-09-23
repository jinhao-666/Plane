#include "themeWidget.h"

ThemeWidget::ThemeWidget(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(THEME_WIDGET_WIDTH,HEIGHT);
    setWindowFlags(Qt::FramelessWindowHint);
    aircraftLabel=new QLabel(this);
    aircraftLabel->setGeometry(10,10,600,300);
    QPixmap aircraftPix(":/Images/aircraft01.jpg");
    aircraftPix.scaled(aircraftLabel->size(),Qt::KeepAspectRatioByExpanding);
    aircraftLabel->setPixmap(aircraftPix);
    aircraftLabel->setScaledContents(true);

    QPixmap background(":/Images/back02.jpg");
    backgroundLabel=new QLabel(this);
    backgroundLabel->setGeometry(10,420,430,350);
    background.scaled(aircraftLabel->size(),Qt::KeepAspectRatioByExpanding);
    backgroundLabel->setPixmap(background);
    backgroundLabel->setScaledContents(true);

    battleLabel=new QLabel(this);
    battleLabel->setGeometry(140,240,225,120);
    QPixmap battlePix(":/Images/battle-01.png");
    battlePix.scaled(battleLabel->size(),Qt::KeepAspectRatioByExpanding);
    battleLabel->setPixmap(battlePix);
    battleLabel->setScaledContents(true);


    QPixmap flyerPix(":/Images/mylogo04.jpg");

    flyer1=new QLabel(this);
    flyer1->setGeometry(420,-120,500,500);
    flyerPix.scaled(flyer1->size(),Qt::KeepAspectRatioByExpanding);
    flyer1->setPixmap(flyerPix);
    flyer1->setScaledContents(true);

    flyer2=new QLabel(this);
    flyer2->setGeometry(490,-120,200,200);
    flyerPix.scaled(flyer2->size(),Qt::KeepAspectRatioByExpanding);
    flyer2->setPixmap(flyerPix);
    flyer2->setScaledContents(true);

    flyer3=new QLabel(this);
    flyer3->setGeometry(450,-150,80,80);
    flyerPix.scaled(flyer3->size(),Qt::KeepAspectRatioByExpanding);
    flyer3->setPixmap(flyerPix);
    flyer3->setScaledContents(true);


    //判断图标的移动
    id=startTimer(25);
    judge=true;
}

void ThemeWidget::timerEvent(QTimerEvent * event)
{
    if(judge&&event->timerId()==id)
    {
        flyer1->setGeometry(flyer1->x()-3,flyer1->y()+3,80,80);
        flyer2->setGeometry(flyer2->x()-3,flyer2->y()+3,40,40);
        flyer3->setGeometry(flyer3->x()-3,flyer3->y()+3,40,40);
        if(flyer1->x()<=10)
            judge=false;
    }

}


