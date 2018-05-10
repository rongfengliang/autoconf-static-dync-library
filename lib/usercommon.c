#include "../include/usercommon.h"
#include <stdio.h>
#include <string.h>
#define USERTYPE  10
const char *LOGINURL = "http://wwww.cnblogs.com/rongfengliang";
int usertype(char *userid){
    printf("login type %d \n",USERTYPE);
    printf("login url %s \n",LOGINURL);
    if (strcmp(userid,"dalong")==0){
        return 100;
    }
   return 0;
}
