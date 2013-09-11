#ifndef user_h
#define user_h
#include"string.h"
class userdata
{
public:
    userdata(){
        memset(muser,0,sizeof(muser));
        memset(mpassword,0,sizeof(mpassword));
        memset(mdbname,0,sizeof(mdbname));
        mport=3306;
    }
    char muser[20];
    char mpassword[20];
    int mport;
    char mdbname[20];
};
#endif
