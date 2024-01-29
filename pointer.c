#include<stdio.h>

#define inc(x) (++x);


int main(){
  const char *ptr = "programming";
  int num =10;
  printf("%s \n",ptr);
  printf("%d \n",num);
  ptr++;
  num++;

    printf("%s \n",ptr);
    printf("%d \n",num);

    printf("inc define called\n");
    inc(ptr);
    inc(num);

    printf("%s \n",ptr);
    printf("%d \n",num);


  getchar();
  return 0;
}
