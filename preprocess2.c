#include<stdio.h>

#define compare(a,b) if (a> b) \
                    {\
                    printf("\n a is greater then b"); \
                    }\
                    else\
                    {\
                    printf("not bigger");\
                    }



int main(){

    compare(2,3);



    getchar();
    return 0;
}