#include "global.h"

QSqlDatabase Global ::db=QSqlDatabase::addDatabase("QSQLITE");
bool Global::createConnection()
{
    Global::db.setDatabaseName("D:\qtFILE\planedazhan\AircraftBattle-master\AircraftBattle-master\sql\game.db");

//    Global::db.setDatabaseName(":/sql/game.db");
    if(!Global::db.open())
    {
        QMessageBox::critical(0,"Cannot open database",
        "Unable to establish a database connection." ,QMessageBox::Cancel);
        return false;
    }
    return true;
}
