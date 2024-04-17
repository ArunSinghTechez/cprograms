#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int TOP = -1;
int STACK[MAX];
void push(int ele);
void pop();
void display();

int main(){
    int CH,val;
    while(1){
    printf("\nchoose from the list \n");
    printf("1-for push \n");
    printf("2-for POP\n");
    printf("3-for Display\n");
    printf("4-for exit\n");
    scanf("%d",&CH);
    switch(CH){
        case 1:
        printf("enter the vlaue \n");
        scanf("%d",&val);
        push(val);
        break;

        case 2:
        
        pop();
        break;

        case 3:
        printf("the stack is:\n");
        display();
        break;

        case 4:
        exit(0);

        default:
        printf("enter the correct choice\n");
        break;

    }
    }



    return 0;
   
}

void push(int ele){
    if (TOP == MAX-1){
        printf("stack is overflow\n");
        return;
    }
    else{
        TOP++;
        STACK[TOP]=ele;
    }
}

void pop(){
    if (TOP == -1){
        printf("Stack is underflow\n");
        return;
    }
    else{
        printf("the popped element is :%d\n",STACK[TOP]);
        TOP--;
    }
}

void display(){
    if(TOP == -1){
        printf("stack is empty\n");
    }
    else {
    for(int i = 0;i<=TOP;i++){
        printf("%d\t",STACK[i]);
    }
    }
}




   