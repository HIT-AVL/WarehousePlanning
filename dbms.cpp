#include "dbms.h"
#include <qfile.h>
#include <qtextstream.h>
#include <QMessageBox>
DBMS::DBMS(userdata du){
    db=du;
    this->initialize_sql();
    this->connect_sql();
}

DBMS::~DBMS(){
    this->disconnet_sql();
}

int DBMS::initialize_sql(){
    return mysql_init(&mysql_conn)?0:1;
}

int DBMS::connect_sql(){
    return mysql_real_connect(&mysql_conn, "localhost", db.muser,db.mpassword,
                              db.mdbname, db.mport, NULL, 0)?0:1;

}
bool DBMS::connect_test(){
    this->initialize_sql();
    return  mysql_real_connect(&mysql_conn, "localhost", db.muser,db.mpassword,"test", db.mport, NULL, 0)?true:false;

}
bool DBMS::reconnect(){
    this->disconnet_sql();
    this->initialize_sql();
    return (this->connect_sql())==0?true:false;
}

int DBMS::disconnet_sql(){
     mysql_close(&mysql_conn);
     return 0;
}

int DBMS::end_server_sql(){
    mysql_server_end();
    return 0;
}
void DBMS::resetuser(userdata x)
{
    db=x;
}

int DBMS::query(char *sqlcmd){
    return mysql_query(&mysql_conn, sqlcmd)==0?0:1;
}

