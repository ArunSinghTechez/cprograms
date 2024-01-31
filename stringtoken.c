#include<stdio.h>

#define str(x) #x


int main(){

    char getstr[] = str(abc);
   
    printf("%s",getstr);



    getchar();
    return 0;
}