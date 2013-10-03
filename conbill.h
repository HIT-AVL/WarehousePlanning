#ifndef CONBILL_H
#define CONBILL_H

#include <storebill.h>
#include <QMap>
#include <QGraphicsPathItem>
#include <QGraphicsEffect>
#include <storeitem.h>
#include <conshelf.h>
#include <conitem.h>
#include <QGraphicsEllipseItem>
#include <QVector>
struct ppoint{
    float x,y;
    int z;
    ppoint(float a,float b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    ppoint()
    {
        x=y=0;
        z=0;

    }
};
class conbill
{
private:
    QVector<QVector<double> >f;
    QVector<QVector<QPair<int,int> > > g;
    QVector<QGraphicsRectItem *> b;
    QGraphicsRectItem * house_rect;
    int n;
    QVector<Node> a;
    QVector<int> decs;
    QVector<QPair<int,int> > to_do;
public:
    QPolygon ploygon;
    ppoint ploy[100];
    int ploylen;
    conbill();
    ~conbill();
    QMap<int,storebill> view;
    QGraphicsPolygonItem *path;
    QGraphicsColorizeEffect * pathcolor;
    QVector<QGraphicsEllipseItem *> point;
    void make_deal(conshelf *shelf,conitem *item);
    void find_path(conshelf *shelf,conitem *item,QVector<QPair<QPair<QString,QString>,int> > &keyword ,int ,int);
    void massOUT(conshelf *shelf,conitem *item,QVector<QPair<QPair<QString,QString>,int> > &keyword );
};

#endif // CONBILL_H
