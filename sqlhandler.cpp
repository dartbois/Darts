#include "sqlhandler.h"
#include <stdio.h>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>

sqlHandler::sqlHandler(const QString& path) {
    bool failFlag = false;

    m_db = QSqlDatabase::addDatabase("DartLeague");
    m_db.setDatabaseName(path);

    if (!m_db.open())
    {
       failFlag = true;
    }

}
