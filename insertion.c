#include<stdio.h>
int main(){
    int n ,pos,item;    //inputs
    printf("enter the size of array : ");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of array : ");
    for(int i=0;i<n-1;i++){
        scanf("%d",&array[i]);
    }
    printf("enter the position : ");
    scanf("%d",&pos);
    printf("enter the item : ");
    scanf("%d",&item);

    
    
    
    for(int i=n-1;i>=pos;i--){    //main process
        array[i]=array[i-1];
        
        
    }
    array[pos-1]=item;
    
    
    
    
    printf("elements of array are : ");   //output
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }  
    

}