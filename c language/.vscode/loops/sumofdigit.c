#include<stdio.h>
void main(){
    int n,temp,sum=0,d;
    printf("enter an integer\n");
    scanf("%d", & n);
    temp=n;
    while(n!=0){
        d=n%10;
        sum+=d;
        n=n/10;
    }
    printf("sum of digits of %d=%d\n",temp,sum);
}