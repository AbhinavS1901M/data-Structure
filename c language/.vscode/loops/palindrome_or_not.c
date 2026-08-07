#include<stdio.h>
void main(){
int n,temp,rev=0,d;
printf("enter an integer\n");
scanf("%d", &n);
temp=n;
while(n!=0){
    d=n%10;
    rev=rev*10+d;
    n=n/10;
}
if(rev==temp){
    printf("palindrome number");
}else{
    printf("not a palindrome number");
}
}