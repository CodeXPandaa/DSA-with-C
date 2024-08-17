#include<stdio.h>
int main(){
    int n;   //inputs
    printf("enter the size of array : ");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of array : ");
    for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
    }
    
    printf("elements of array are : ");  //output
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }    
}