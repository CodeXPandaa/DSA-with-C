#include<stdio.h>
int main(){
    int n,item,beg,mid,end,loc; //inputs 
    printf("enter the size of array : ");
    scanf("%d",&n);
    int array[n];
    printf("enter the sorted list : ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter the element you wanna search : ");
    scanf("%d",&item);
    
    
    beg=0;   //initailize all values
    end=n-1;
    mid=(beg+end)/2;
    loc=-1;

    
    while (beg<=end && array[mid]!=item) {  //main process
        if (item<array[mid]){
            end=mid-1;
        }
        else { beg=mid+1;
        
        mid=(beg+end)/2;  //behave as decrement oprator
    }

    if (item=array[mid]){
        loc=mid;
    }



    if (loc>=0){    //output
        printf("search sucessful !!!\n");
        loc+=1;
        printf("element found at position :%d",loc);
    }
    else  printf("search fail !!!");
    }
}