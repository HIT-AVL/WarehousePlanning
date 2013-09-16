#ifndef CONHOUSE_H
#define CONHOUSE_H
#include <dbms.h>
#include <storehouse.h>
#include <storeshelf.h>
#include <QVector>
#include "user.h"
class conhouse:public DBMS
{
private:
    storehouse get_house_now();
public:
    conhouse(userdata hu);
    void rinit();
    storehouse house;

    //QVector<storeshelf>;
    void insert_house(storehouse&);
    void delete_house();
};

#endif // CONHOUSE_H
