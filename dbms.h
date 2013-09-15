#ifndef DBMS_H
#define DBMS_H

#ifndef __LCC__
#define __LCC__
#endif
#include"user.h"
#include <mysql.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <QString>
//#include <QDebug>

class DBMS
{
public:
    DBMS(userdata du);
    ~DBMS();
    int initialize_sql();
    int connect_sql();
    bool reconnect();
    int disconnet_sql();
    int end_server_sql();
    int query(char *sqlcmd);
    bool connect_test();
    void resetuser(userdata x);
    int errorCode;
    userdata db;
protected:
    MYSQL_RES *mysql_result;
    MYSQL_ROW mysql_row;
    MYSQL mysql_conn;
private:
    //int errorCode;
};

#endif // DBMS_H
