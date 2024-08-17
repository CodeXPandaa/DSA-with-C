#include<stdio.h>
int main(){
    int n,temp,pos; //inputs 
    printf("enter the size of array : ");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter the position : ");
    scanf("%d",&pos);



    temp=array[pos-1];   //main process
    for(int i=pos-1;i<n;i++){
    array[i]=array[i+1];
    }
    printf("deleted element is : %d",temp);



    printf(" \nelements of array are : ");  //output
    for(int i=0;i<n-1;i++){
        printf("%d ",array[i]);
    } 
}    