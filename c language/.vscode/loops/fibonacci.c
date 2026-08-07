#include<stdio.h>
int main(){
    int n,i;
    int a=0,b=1;
    int c;
    printf("enter tne number: ");
    scanf("%d", &n);
    printf("fibonacci series: ");
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
    

}