#include<stdio.h>
int main(){
    int n,item,loc=-1; //inputs 
    printf("enter the size of array : ");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter the element you wanna search : ");
    scanf("%d",&item);


    for(int i=0;i<n;i++){  //main process + output
    if(array[i]==item){
       loc=i;
       break;
    }
    }
    if (loc>0){
        printf("search sucessful !!!\n");
        loc+=1;
        printf("element found at position :%d",loc);
    }
    else  printf("search fail !!!");
    
}