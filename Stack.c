#include<stdio.h> //header file
#include<stdlib.h>
//Library
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

  int option;
  char toContinue;
  
  do{
  printf("Operation to perform: \n");
  printf("1. Push\n2. Pop\n3. Peek\n4. Exit\n");
  scanf("%d",&option);
  
  switch(option){
    case 1: push();
      break;
    case 2: pop();
      break;
    case 3: peek();
      break;
    case 4: exit(0);
      break;
      
    default : printf("Invalid input key, try again...\n");  
  
  
  }
  
  printf("Do you want to continue?(Y/N)");
  fflush(stdin);
  scanf("%c",&isContinue);
  
}while(c == 'Y' || c == 'y');
  


return 0;
}
