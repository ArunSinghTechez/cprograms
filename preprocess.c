#include<stdio.h>

#define str(a,b) (a##b)

int main(){
    
    int num3 = str(15,17);

    printf("%d",num3);


    getchar();
    return 0;
}