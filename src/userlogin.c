#include <stdio.h>
#include "../include/usercommon.h"
#include "../include/userloginapp.h"
int main(){
   int user_type = usertype("dalong");
   printf("usertype demo is %d \n",user_type);
   printmyinfo();
   return 0;
}