#include<stdio.h>
int main(){
    int n,a=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1){
        printf("1 is neither prime nor composite");
    }
    else if(a==0){
        printf("the number is prime");
    }
    else{
        printf("the number is composite");
    }
    return 0;
}