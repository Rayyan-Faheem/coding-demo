#include<stdio.h>
int main(){
    int n,last_digit;
    printf("enter a number");
    scanf("%d",&n);
    int r=0;
    while(n>0){
        r=r+(n%10);
        r=r*10;
        n=n/10;
    }
    printf("the reverse is %d",r);

    return 0;
}
