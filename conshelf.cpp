#include "conshelf.h"

conshelf::conshelf(userdata su):DBMS(su)
{
    char cmd[400];
    view.clear();
    sprintf(cmd,"select * from shelf");
    len=0;
    if (query(cmd)==0){
        storeshelf tmp;
        mysql_result=mysql_store_result(&mysql_conn);
        while ((mysql_row=mysql_fetch_row(mysql_result))){
            tmp.id=atoi(mysql_row[0]);
            tmp.name=QString(QLatin1String(mysql_row[1]));
            tmp.belong_to=atoi(mysql_row[2]);
            tmp.figure=new QGraphicsRectItem;
            tmp.figure->setRect(atoi(mysql_row[3]),atoi(mysql_row[4]),atoi(mysql_row[5]),atoi(mysql_row[6]));
            tmp.x=atoi(mysql_row[7]);
            tmp.y=atoi(mysql_row[8]);
            tmp.z=atoi(mysql_row[9]);
            tmp.thin=atoi(mysql_row[10]);
            tmp.description=QString(QLatin1String(mysql_row[11]));
            view[tmp.id]=tmp;
            this->getshelf(tmp);
        }
    }
}
void conshelf::rinit()
{
    char cmd[400];
    view.clear();
    sprintf(cmd,"select * from shelf");
    len=0;
    if (query(cmd)==0){
        storeshelf tmp;
        mysql_result=mysql_store_result(&mysql_conn);
        while ((mysql_row=mysql_fetch_row(mysql_result))){
            tmp.id=atoi(mysql_row[0]);
            tmp.name=QString(QLatin1String(mysql_row[1]));
            tmp.belong_to=atoi(mysql_row[2]);
            tmp.figure=new QGraphicsRectItem;
            tmp.figure->setRect(atoi(mysql_row[3]),atoi(mysql_row[4]),atoi(mysql_row[5]),atoi(mysql_row[6]));
            tmp.x=atoi(mysql_row[7]);
            tmp.y=atoi(mysql_row[8]);
            tmp.z=atoi(mysql_row[9]);
            tmp.thin=atoi(mysql_row[10]);
            tmp.description=QString(QLatin1String(mysql_row[11]));
            view[tmp.id]=tmp;
            this->getshelf(tmp);
        }
    }
}

void conshelf::insert_shelf(storeshelf &u){
    char cmd[400];
    sh[len].dir=u.x;
    sh[len].c=u.y;
    sh[len].layer=u.z;
    sh[len].name=u.name.toLatin1().data();
    sh[len].x=u.figure->rect().toRect().x();
    sh[len].xh=u.figure->rect().toRect().width();
    sh[len].y=u.figure->rect().toRect().y();
    sh[len].yh= u.figure->rect().toRect().height();
    sprintf(cmd,"insert into shelf(name,belong_to,x,y,w,h,direc,col,layer,thin,description)values(\'%s\',%d,%d,%d,%d,%d,%d,%d,%d,%d,\'%s\')",
            u.name.toLatin1().data(),u.belong_to,u.figure->rect().toRect().x(),u.figure->rect().toRect().y(),u.figure->rect().toRect().width(),
            u.figure->rect().toRect().height(),u.x,u.y,u.z,u.thin,u.description.toLatin1().data()
            );
    query(cmd);
    sprintf(cmd,"select LAST_INSERT_ID()");
    query(cmd);
    mysql_result=mysql_store_result(&mysql_conn);
    mysql_row=mysql_fetch_row(mysql_result);
    u.id=QString(QLatin1String(mysql_row[0])).toInt();
    sh[len].id=u.id;
    len--;
    view[u.id]=u;
    return ;
}

void conshelf::delete_shelf(int ID){
    char cmd[400];
    int i;
    for(i =0;i<len;i++)
        if(sh[i].id==ID)
            break;
    for(;i<len;i++)
        sh[i]=sh[i+1];
    len--;
    sprintf(cmd,"delete from shelf where shelf.id=%d",ID);
    delete view[ID].figure;
    view.erase(view.find(ID));
    query(cmd);
    return ;
}
void conshelf::getshelf(storeshelf st){

    sh[len].id=st.id;
    sh[len].name=st.name;
    sh[len].c=st.y;
    sh[len].layer=st.z;
    sh[len].dir=st.x;
    sh[len].x=st.figure->rect().x();
    sh[len].y=st.figure->rect().y();
    sh[len].xh=st.figure->rect().width();
    sh[len].yh=st.figure->rect().height();
    len++;
    return ;
}
bool conshelf::caninsert(int lid, int llayer, int lc)
{
    int i;
    for(i=0;i<len;i++)
        if(sh[i].id==lid)
            break;
    if(i==len)
        return false;
    if(llayer>sh[i].layer||lc>sh[i].c)
        return false;
    return true;
}
int conshelf::findshelf(QString name)
{
    for(int i=0 ; i < len ; i++)
    {
        if(sh[i].name==name)
            return sh[i].id;
    }
    return -1;
}
/***
  *判断一个字符串是否为纯数字
  */
int conshelf::isDigitStr(QString src)
{
    QByteArray ba = src.toLatin1();//QString 转换为 char*
     const char *s = ba.data();

    while(*s && *s>='0' && *s<='9') s++;

    if (*s)
    { //不是纯数字
        return -1;
    }
    else
    { //纯数字
        return 0;
    }
}
int conshelf::getbelong_to(QString s)
{
    if(isDigitStr(s)==0)
        return s.toInt();
    else
        return findshelf(s);
}

Node conshelf::toNode(const storeitem & u,int id)
{
    QRect shelf=view[u.belong_to].figure->rect().toRect();
    QPoint p;
    double y=view[u.belong_to].y;
    //qDebug()<<"#"<<shelf.x()<<shelf.y()<<shelf.right()<<shelf.bottom()<<u.y<<y;
    switch (u.x){
    case(0):
        p=shelf.topRight();
        p.rx()-=(u.y/y)*shelf.width();
        p.ry()-=3;
        break;
    case(1):
        p=shelf.bottomLeft();
        p.rx()+=(u.y/y)*shelf.width();
        p.ry()+=3;
        break;
    case(2):
        p=shelf.topLeft();
        p.rx()-=3;
        p.ry()+=(u.y/y)*shelf.height();
        break;
    case(3):
        p=shelf.bottomRight();
        p.rx()+=3;
        p.ry()-=(u.y/y)*shelf.height();
        break;
    }
    return Node(p.x(),p.y(),id,u.z);
}
