#include "gameBoardWidget.h"
#include <QPalette>
#include <QImage>
GameBoardWidget::GameBoardWidget(QWidget* mainMenuWidget, QWidget *parent)
    : QWidget(parent)
{
    setWindowFlags(Qt::FramelessWindowHint);
    this->setFixedSize(WIDTH,HEIGHT);
    sortChosen=0;

    //表格格式构建
    model=new QSqlQueryModel;
    showSortChosen();
    model->setHeaderData(0,Qt::Horizontal,tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,tr("玩家姓名"));
    model->setHeaderData(2,Qt::Horizontal,tr("游戏次数"));
    model->setHeaderData(3,Qt::Horizontal,tr("总分"));
    model->setHeaderData(4,Qt::Horizontal,tr("平均分"));



    tableView=new QTableView(this);
    tableView->setGeometry(20,80,650,500);
    tableView->setModel(model);
    tableView->setColumnWidth(2,NUMBER_OF_GAME_WIDTH);
    tableView->setColumnWidth(1,USER_NAME_WIDTH);
    tableView->setColumnWidth(0,ID_WIDTH);
    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setAlternatingRowColors(true);

    //回到主菜单按钮
    mainMenuButton= new QPushButton(tr("主菜单"),this);
    mainMenuButton->setIcon(QIcon(":/Images/mainMenu.png"));
    mainMenuButton->setStyleSheet(BUTTON_STYLE_3);
    mainMenuButton->setIconSize(QSize(BUTTON_ICON_SIZE_3,BUTTON_ICON_SIZE_3));
    mainMenuButton->setGeometry(530,20,150,40);
    connect(mainMenuButton,SIGNAL(clicked(bool)),mainMenuWidget
        ,SLOT(gameBoardWidgetMainMenuButtonClicked()));
    //文字输入框
    lineEdit = new QLineEdit(this);
    lineEdit->setGeometry(20,20,200,40);
    lineEdit->setPlaceholderText(QString("输入玩家姓名"));
    lineEdit->setMaxLength(17);
    lineEdit->setFont(QFont("jinhao",14,50));
    //查询按钮
    searchButton=new QPushButton(tr("查找"),this);
    searchButton->setIcon(QIcon(":/Images/search.png"));
    searchButton->setStyleSheet(BUTTON_STYLE_3);
    searchButton->setIconSize(QSize(BUTTON_ICON_SIZE_3,BUTTON_ICON_SIZE_3));
    searchButton->setGeometry(230,20,100,40);
    connect(searchButton,SIGNAL(clicked(bool)),this
            ,SLOT(searchButtonClicked()));
    //显示全表按钮
    showAllButton=new QPushButton(tr("展示所有"),this);
    showAllButton->setIcon(QIcon(":/Images/table.png"));
    showAllButton->setStyleSheet(BUTTON_STYLE_3);
    showAllButton->setIconSize(QSize(BUTTON_ICON_SIZE_3,BUTTON_ICON_SIZE_3));
    showAllButton->setGeometry(350,20,120,40);
    connect(showAllButton,SIGNAL(clicked(bool)),this
            ,SLOT(showAllButtonClicked()));
    //删除一条记录按钮
    deleteButton=new QPushButton(tr("删除"),this);
    deleteButton->setIcon(QIcon(":/Images/delete.png"));
    deleteButton->setStyleSheet(BUTTON_STYLE_3);
    deleteButton->setIconSize(QSize(BUTTON_ICON_SIZE_3,BUTTON_ICON_SIZE_3));
    deleteButton->setGeometry(330,580,150,40);
    connect(deleteButton,SIGNAL(clicked(bool)),this
            ,SLOT(deleteButtonClicked()));
    //删除全部记录
    deleteAllButton=new QPushButton(tr("删除所有"),this);
    deleteAllButton->setIcon(QIcon(":/Images/deleteAll.png"));
    deleteAllButton->setStyleSheet(BUTTON_STYLE_3);
    deleteAllButton->setIconSize(QSize(BUTTON_ICON_SIZE_3,BUTTON_ICON_SIZE_3));
    deleteAllButton->setGeometry(500,580,150,40);
    connect(deleteAllButton,SIGNAL(clicked(bool)),this
            ,SLOT(deleteAllButtonClicked()));


    //图片设置背景
    QPalette PAllbackground = this->palette();
    QImage ImgAllbackground(":/Images/back001.jpg");
    QImage fitimgpic=ImgAllbackground.scaled(this->width(),this->height(), Qt::IgnoreAspectRatio);
    PAllbackground.setBrush(QPalette::Window, QBrush(fitimgpic));
    this->setPalette(PAllbackground);

}

void GameBoardWidget::searchButtonClicked()
{
    QString user=lineEdit->text();
    model->setQuery(
     QString("select * from player where userName='%1'").arg(user),Global::db);
}
void GameBoardWidget::showAllButtonClicked()
{
   lineEdit->clear();
   showSortChosen();
}

void GameBoardWidget::deleteAllButtonClicked()
{
   lineEdit->clear();
   model->setQuery(QString("delete from player where 1=1"));
   showSortChosen();
   tableView->setColumnWidth(2,NUMBER_OF_GAME_WIDTH);
   tableView->setColumnWidth(1,USER_NAME_WIDTH);
   tableView->setColumnWidth(0,ID_WIDTH);
}
void GameBoardWidget::deleteButtonClicked()
{
    int curRow=tableView->currentIndex().row();
    QString id=model->data(model->index(curRow,0)).toString();
    model->setQuery(
    QString("delete from player where id = '%1'").arg(id));
    showSortChosen();
    lineEdit->clear();
    tableView->setColumnWidth(2,NUMBER_OF_GAME_WIDTH);
    tableView->setColumnWidth(1,USER_NAME_WIDTH);
    tableView->setColumnWidth(0,ID_WIDTH);
}

void GameBoardWidget::idSortClicked()
{
    sortButton[sortChosen]->setStyleSheet(BUTTON_STYLE_3);
    sortButton[0]->setStyleSheet(BUTTON_STYLE_4);
    sortChosen=0;
    showSortChosen();
}
void GameBoardWidget::numberOfGameSortClicked()
{
    sortButton[sortChosen]->setStyleSheet(BUTTON_STYLE_3);
    sortButton[1]->setStyleSheet(BUTTON_STYLE_4);
    sortChosen=1;
    showSortChosen();
}
void GameBoardWidget::totCreditSortClicked()
{
    sortButton[sortChosen]->setStyleSheet(BUTTON_STYLE_3);
    sortButton[2]->setStyleSheet(BUTTON_STYLE_4);
    sortChosen=2;
    showSortChosen();
}
void GameBoardWidget::averageCreditSortClicked()
{
    sortButton[sortChosen]->setStyleSheet(BUTTON_STYLE_3);
    sortButton[3]->setStyleSheet(BUTTON_STYLE_4);
    sortChosen=3;
    showSortChosen();
}

void GameBoardWidget::showSortChosen()
{
    switch (sortChosen)
    {
    case 0:
         model->setQuery(QString("select * from player "),Global::db);
        break;
    case 1:
        model->setQuery("select * from player order by numberOfGame desc",Global::db);
        break;
    case 2:
        model->setQuery("select * from player order by totCredit desc",Global::db);
        break;
    case 3:
        model->setQuery("select * from player order by averageCredit desc",Global::db);
        break;
    }
}
