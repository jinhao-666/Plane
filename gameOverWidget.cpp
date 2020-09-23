
#include "gameOverWidget.h"

GameOverWidget::GameOverWidget(QWidget* mainMenu,
                    int credit, int level, QWidget *parent)
    : QWidget(parent)
{
    setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(WIDTH,HEIGHT);
    this->credit=credit;
    this->level=level;
    themeWidget=new ThemeWidget(this);


    //玩家飞机图标
    QPixmap flyerPix(":/Images/zhandouji.jpg");

    IconShow=new QLabel(this);
    IconShow->setGeometry(500,30,100,100);
    flyerPix.scaled(IconShow->size(),Qt::KeepAspectRatioByExpanding);
    IconShow->setPixmap(flyerPix);
    IconShow->setScaledContents(true);
    //游戏积分显示
    creditShow=new QLabel(this);
    creditShow->
        setText(QString("分数: ").append(QString::number(credit,10)));
    creditShow->setFont(QFont("jinhao",30,100));
    creditShow->setGeometry(420,160,260,80);
    //游戏模式显示
    modeShow=new QLabel(this);
    modeShow->setFont(QFont("jinhao",26,100));
    QString mode;
    switch(level)
    {
        case 1:
        mode="星耀";
        modeShow->setFont(QFont("jinhao",20,100));
        break;
        case 2:mode="废铁";break;
        case 3:mode="青铜";break;
        case 4:mode="黄金";break;
        case 5:mode="王者";break;
    }
    mode=QString("模式:").append(mode);
    modeShow->setText(mode);

    modeShow->setGeometry(430,240,300,80);

    //玩家按钮
    playerButton=new QPushButton(" 玩家模式 ",this);
    playerButton->setGeometry(420,350,260,80);
    playerButton->setStyleSheet(BUTTON_STYLE_2);
    playerButton->setIconSize(QSize(BUTTON_ICON_SIZE_2,BUTTON_ICON_SIZE_2));
    connect(playerButton,SIGNAL(clicked(bool)),this
            ,SLOT(playerButtonClicked()));
    //游客按钮
    touristsButton = new QPushButton("游客模式",this);
    touristsButton->setGeometry(420,450,260,80);
    touristsButton->setStyleSheet(BUTTON_STYLE_2);
    touristsButton->setIconSize(QSize(BUTTON_ICON_SIZE_2,BUTTON_ICON_SIZE_2));
    connect(touristsButton,SIGNAL(clicked(bool)),mainMenu
            ,SLOT(gameOverWidgetButtonClicked()));
    //用户名输入提示
    userName=new QLabel(this);
    userName->hide();
    userName->setText(QString("玩家 "));
    userName->setGeometry(420,350,80,100);
    userName->setFont(QFont("jinhao",20,100));
    //输入框
    lineEdit=new QLineEdit(this);
    lineEdit->hide();
    lineEdit->setGeometry(500,380,180,40);
    lineEdit->setPlaceholderText(QString("输入玩家姓名"));
    lineEdit->setMaxLength(17);
    lineEdit->setFont(QFont("jinhao",14,50));
    //提交按钮
    submitButton = new QPushButton("提交",this);
    submitButton->hide();
    submitButton->setGeometry(420,450,120,80);
    submitButton->setStyleSheet(BUTTON_STYLE_3);
    submitButton->setIconSize(QSize(BUTTON_ICON_SIZE_2,BUTTON_ICON_SIZE_2));
    connect(submitButton,SIGNAL(clicked(bool)),this
            ,SLOT(submitButtonClicked()));
    //取消按钮
    cancelButton = new QPushButton("取消",this);
    cancelButton->hide();
    cancelButton->setGeometry(560,450,120,80);
    cancelButton->setStyleSheet(BUTTON_STYLE_3);
    cancelButton->setIconSize(QSize(BUTTON_ICON_SIZE_2,BUTTON_ICON_SIZE_2));
    connect(cancelButton,SIGNAL(clicked(bool)),this
            ,SLOT(cancelButtonClicked()));

    connect(this,SIGNAL(over()),mainMenu,SLOT(gameOverWidgetButtonClicked()));
}
void GameOverWidget::playerButtonClicked()
{
    playerButton->hide();
    touristsButton->hide();

    userName->show();
    lineEdit->show();
    submitButton->show();
    cancelButton->show();
}

void GameOverWidget::submitButtonClicked()
//在数据库中搜索用户名，已存在则更新数据不存在则创建并储存
{

    QString user=lineEdit->text();
    QSqlQuery query(Global::db);
    query.exec(QString("select count(*) from player where userName='%1';").arg(user));
    query.next();


    if(query.value(0).toInt())
    {
        query.exec(QString("select * from player where userName ='%1';").arg(user));
        int numberOfGame=0,totCredit=0;
        int averageCredit=0;
        while(query.next())
        {

            numberOfGame=query.value(2).toInt()+1;
            totCredit=query.value(3).toInt()+credit;
            averageCredit=totCredit/numberOfGame;
        }
        query.exec(QString("update player set numberOfGame = '%1'  where "
            "userName = '%2' ").arg(QString::number(numberOfGame,10),user));
        query.exec(QString("update player set totCredit = '%1'  where "
            "userName = '%2' ").arg(QString::number(totCredit,10),user));
        query.exec(QString("update player set averageCredit = '%1'  where "
            "userName = '%2' ").arg(QString::number(averageCredit,10),user));
    }
    else
    {
        query.exec(QString("insert into player (userName , numberOfGame ,"
                    "totCredit , averageCredit ) values ( '%1' , '1' ,'%2',"
    "'%3')").arg(user,QString::number(credit,10),QString::number(credit,10)));

    }
    emit over();
}

void GameOverWidget::cancelButtonClicked()
//恢复原来的页面
{
    userName->hide();
    submitButton->hide();
    cancelButton->hide();
    lineEdit->hide();

   playerButton->show();
   touristsButton->show();
}


