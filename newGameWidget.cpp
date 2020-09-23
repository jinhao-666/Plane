
#include "newGameWidget.h"

NewGameWidget::NewGameWidget( QWidget*mainMenuWidget,QWidget *parent)
    :QWidget(parent)
{
    setWindowFlags(Qt::FramelessWindowHint);
    this->setFocus();
    this->setFixedSize(WIDTH,HEIGHT);
    themeWidget=new ThemeWidget(this);
    //游戏模式按键构造
    level1=new QPushButton(tr("星耀"),this);
    level1->setIcon(QIcon(":/Images/airplane.jpg"));
    level1->setStyleSheet(BUTTON_STYLE_1);
    level1->setIconSize(QSize(BUTTON_ICON_SIZE_1,BUTTON_ICON_SIZE_1));
    connect(level1,SIGNAL(clicked(bool)),mainMenuWidget,SLOT(level_1_Cliked()));

    level2=new QPushButton(tr("废铁"),this);
    level2->setIcon(QIcon(":/Images/airplane.jpg"));
    level2->setStyleSheet(BUTTON_STYLE_1);
    level2->setIconSize(QSize(BUTTON_ICON_SIZE_1,BUTTON_ICON_SIZE_1));
    connect(level2,SIGNAL(clicked(bool)),mainMenuWidget,SLOT(level_2_Cliked()));

    level3=new QPushButton(tr("青铜"),this);
    level3->setIcon(QIcon(":/Images/airplane.jpg"));
    level3->setStyleSheet(BUTTON_STYLE_1);
    level3->setIconSize(QSize(BUTTON_ICON_SIZE_1,BUTTON_ICON_SIZE_1));
    connect(level3,SIGNAL(clicked(bool)),mainMenuWidget,SLOT(level_3_Cliked()));

    level4=new QPushButton(tr("黄金"),this);
    level4->setIcon(QIcon(":/Images/airplane.jpg"));
    level4->setStyleSheet(BUTTON_STYLE_1);
    level4->setIconSize(QSize(BUTTON_ICON_SIZE_1,BUTTON_ICON_SIZE_1));
    connect(level4,SIGNAL(clicked(bool)),mainMenuWidget,SLOT(level_4_Cliked()));

    level5=new QPushButton(tr("王者"),this);
    level5->setIcon(QIcon(":/Images/airplane.jpg"));
    level5->setStyleSheet(BUTTON_STYLE_1);
    level5->setIconSize(QSize(BUTTON_ICON_SIZE_1,BUTTON_ICON_SIZE_1));
    connect(level5,SIGNAL(clicked(bool)),mainMenuWidget,SLOT(level_5_Cliked()));

    mainMenuButton= new QPushButton(tr("菜单"),this);
    mainMenuButton->setIcon(QIcon(":/Images/mainMenu.png"));
    mainMenuButton->setStyleSheet(BUTTON_STYLE_1);
    mainMenuButton->setIconSize(QSize(BUTTON_ICON_SIZE_1,BUTTON_ICON_SIZE_1));
    connect(mainMenuButton,SIGNAL(clicked(bool)),mainMenuWidget
        ,SLOT(newGameWidgetMainMenuButtonCliked()));


    //右边游戏模式按键选择
    layout=new QVBoxLayout;

    layout->addWidget(level2);
    layout->addWidget(level3);
    layout->addWidget(level4);
    layout->addWidget(level1);
    layout->addWidget(level5);

    layout->addWidget(mainMenuButton);
    layout->setSpacing(3);
    layout->setContentsMargins(THEME_WIDGET_WIDTH,10,20,10);
    this->setLayout(layout);


}
NewGameWidget::~NewGameWidget()
{
    delete themeWidget;
    delete level1;
    delete level2;
    delete level3;
    delete level4;
    delete level5;
    delete mainMenuButton;
    delete layout;

}







