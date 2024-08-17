#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void traverse();
int a[5];
int top =-1;

int main(){
    int choice,i;
    int n;
    
    do
    { printf("\n 1. push");
      printf("\n 2. pop");
      printf("\n 3. traverse");
      printf("\n enter your choice : ");
      scanf("%d",&choice);

      switch (choice)
      {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        traverse();
        break;
      
      default:
        printf("you enter a worng choice");
        break;
      }
      printf("\npress (1-->continue or any key-->discontinue)");
      fflush(stdin);
      scanf("%d",&n);
   
    } while (n==1);
    
}
void push(){
    int val ;
    if(top>4)
    printf("stack overflow !!!");
    else {
        printf("enter the number : ");
        scanf("%d",&val);
        top+=1;
        a[top]=val;
    }
}
void traverse(){
    int i ;
    if(top==-1)
    printf("stack empty !!!");
    else {
        printf("\n Display stack : ");
        for ( i = top; i >= 0; i--){
            printf("%d ",a[i]);
        }
        
    }
}
void pop(){
    int val ;
    if(top<0)
    printf("stack underflow !!!");
    else {
        val=a[top];
        top-=1;
        printf("deleted element is :%d\n",val);
    }
}