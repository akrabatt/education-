#include <iostream>
#include "./sqlite3.h"

const char *SQL = "CREATE TABLE IF NOT EXISTS foo(a,b,c); INSERT INTO FOO VALUES(1,2,3); INSERT INTO FOO SELECT * FROM FOO;";

int main()
{
    sqlite3 *db;
    sqlite3_stmt *stmt;
    sqlite3_open("my_Db.db", &db);
}