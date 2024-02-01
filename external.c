#include<stdio.h>
#include "external.h"

int main(){
    extern int basic;
    extern int da;
    extern char name[];

    printf("%d \t %d \t %s\t", basic,da,name);



    getchar();
    return 0;
}
