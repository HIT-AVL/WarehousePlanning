#include "conhouse.h"
#include "user.h"
#include "QMessageBox"
conhouse::conhouse(userdata hu):DBMS(hu)
{
    house.id=-1;
    char cmd[400];
    flag=false;
    if(!this->f)
    {
        QMessageBox::information(0, "注意", "数据库连接失败,请确保mysql服务已运行。如果您是第一次运行该软件，请按以下步骤操作：1、设置mysql用户信息；2、输入要建立的数据库名称，初始化数据库；3、点击重新连接数据库", QMessageBox::Ok );
    }


  //  this->connect_sql();
    sprintf(cmd,"select * from house");
    if (query(cmd)==0){
        storehouse tmp;
        mysql_result=mysql_store_result(&mysql_conn);
        if((mysql_row=mysql_fetch_row(mysql_result))){
            tmp.id=atoi(mysql_row[0]);
            tmp.name=QString(QLatin1String(mysql_row[1]));
            tmp.figure=new QGraphicsRectItem;
            tmp.figure->setRect(atoi(mysql_row[2]),atoi(mysql_row[3]),atoi(mysql_row[4]),atoi(mysql_row[5]));
            tmp.description=QString(QLatin1String(mysql_row[6]));
            house=tmp;
            flag=true;
        }
        //qDebug()<<house.id<<endl;
    }
}
void conhouse::rinit(){
    house.id=-1;
    char cmd[400];
    flag=false;
  //  this->connect_sql();
    sprintf(cmd,"select * from house");
    if (query(cmd)==0){
        storehouse tmp;
        mysql_result=mysql_store_result(&mysql_conn);
        if((mysql_row=mysql_fetch_row(mysql_result))){
            tmp.id=atoi(mysql_row[0]);
            tmp.name=QString(QLatin1String(mysql_row[1]));
            tmp.figure=new QGraphicsRectItem;
            tmp.figure->setRect(atoi(mysql_row[2]),atoi(mysql_row[3]),atoi(mysql_row[4]),atoi(mysql_row[5]));
            tmp.description=QString(QLatin1String(mysql_row[6]));
            house=tmp;
            flag=true;
        }
    }
}
void conhouse::insert_house(storehouse& u){
    if (house.id>0)return ;
    char cmd[400];
    sprintf(cmd,"insert into house(name,x,y,w,h,description) values(\'%s\',%d,%d,%d,%d,\'%s\')",
            u.name.toLatin1().data(),u.figure->rect().toRect().x(),u.figure->rect().toRect().y(),
            u.figure->rect().toRect().width(),u.figure->rect().toRect().height(),u.description.toLatin1().data()
            );
    query(cmd);
    sprintf(cmd,"select LAST_INSERT_ID()");
    query(cmd);
    mysql_result=mysql_store_result(&mysql_conn);
    mysql_row=mysql_fetch_row(mysql_result);
    u.id=QString(QLatin1String(mysql_row[0])).toInt();
    house=u;
    flag=true;
    return ;
}

void conhouse::delete_house(){
    if (house.id<0)return;
    char cmd[400];
    delete house.figure;
    sprintf(cmd,"delete from house where house.id=%d",house.id);
    house.id=-1;
    query(cmd);
    return ;
}
