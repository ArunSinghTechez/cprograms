#include<stdio.h>

#define PI 3.14
#define areacircle(x) ((PI)*(x)*(x))

int main(){
  float area;
  area = areacircle(5);
  printf("%.2f",area);



  getchar();
  return 0;
}
