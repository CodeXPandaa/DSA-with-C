#include<stdio.h>
int main(){
    int ans =0,pow=1,binNum,rem;
    printf("Enter a binary number: ");
    scanf("%d",&binNum);
    while(binNum>0){
        rem=binNum%10;
        binNum=binNum/10;
        ans += (rem*pow);
        pow=pow*2;
    }
    printf("%d",ans);
}