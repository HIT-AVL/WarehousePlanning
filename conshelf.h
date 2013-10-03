#ifndef CONSHELF_H
#define CONSHELF_H

#include <storeshelf.h>
#include <QMap>
#include <storeitem.h>
#include <dbms.h>
#include <QVector>
#include "user.h"
struct Node{
    int x,y,layer;
    int id;
    QVector<QPair<int,double> > e;
    Node(){
        id=-1;
        e.clear();
        layer=0;
    }
    Node (int a,int b){
        id=-1;
        e.clear();
        x=a;
        y=b;
        layer=0;
    }
    Node(int a,int b,int c){
        id=-1;
        e.clear();
        layer=0;
        x=a;
        y=b;
        id=c;
    }
    Node(int a,int b,int c,int d)
    {
        e.clear();
        x=a;
        y=b;
        id=c;
        layer=d;
    }
};
struct shdata{
    shdata(int sc =0,int sl=0,int sid =0,int sdir=0,QString sn="")
    {
        c=sc;
        layer=sl;
        id=sid;
        sdir=dir;
        name=sn;
    }

    int c,layer,id,dir;
    double x,xh,y,yh;
    QString name;
};

class conshelf : public DBMS
{
public:
    conshelf(userdata su);
    shdata sh[1000];
    int len;
    QMap<int,storeshelf> view;
    void rinit();
    void insert_shelf(storeshelf&);
    void delete_shelf(int);
    void getshelf(storeshelf st);
    bool caninsert(int lid,int llayer,int lc);
    int isDigitStr(QString src);
    int getbelong_to(QString s);
    int findshelf(QString name);
    Node toNode(const storeitem & u,int id);
    //QVector<storeitem> get_item_of_shelf(int);
};

#endif // CONSHELF_H
