#ifndef CONITEM_H
#define CONITEM_H

#include <dbms.h>
#include <storeitem.h>
#include <QMap>
#include <QVector>
#include "user.h"
class conitem : public DBMS
{
public:
    conitem(userdata iu);
    QMap<int,storeitem> view;

    void insert_item(storeitem&);
    void delete_item(int);
    void change_num(int,int);
    QVector<storeitem> get_item_of_description(int ,QString);
    QVector<storeitem> get_item_of_shelf(int );
};

#endif // CONITEM_H
