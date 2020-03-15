#ifndef SQLHANDLER_H
#define SQLHANDLER_H
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>

class sqlHandler
{
public:
    sqlHandler(const QString& path);
private:
    QSqlDatabase m_db;
};

#endif // SQLHANDLER_H
