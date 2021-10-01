#include<stdio.h>
#include<stdlib.h>

#define N 30

int stack[N],top = -1;

void push(int data){
  if(top == N-1){
    printf("Cannot insert the element, Stack overflow...");
    return;
  }
  stack[++top] = data;
  printf("Pushed successfully");
  
}

void pop(){
  if(top == -1){
    printf("Cannot perform pop operation, Stack underflow(Empty)");
    return;
  }
  printf("The element poped out is %d",stack[top--]);
  

}

void peek(){
  if(top == -1){
    printf("Stack underflow, cannot peek into..");
    return;
  }
  
  printf("The peek element is %d",stack[top]);
}

int main(){



return 0;
}
