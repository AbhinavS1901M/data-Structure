#include<iostream>
using namespace std;
int f(int n){
    //base case...
    if (n>=0 && n<=9){
        return n;
    }
  return f(n/10)+(n%10);  
}
int main(){
    int n;
    cout<<"enter the digits:";
cin>>n;
int result=f(n);
cout<<result;
    return 0;
}