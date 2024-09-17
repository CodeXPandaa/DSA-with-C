#include<stdio.h>
int main(){
    int ans =0,pow=1,decNum,rem;
    printf("Enter a decimal number: ");
    scanf("%d",&decNum);
    while(decNum>0){
        rem=decNum%2;
        decNum=decNum/2;
        ans += (rem*pow);
        pow=pow*10;
    }
    printf("%d",ans);
}