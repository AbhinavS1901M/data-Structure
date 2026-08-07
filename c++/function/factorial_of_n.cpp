#include<iostream>
using namespace std;
int factorialN(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;}
return fact;
    }
int main (){
    int n;
    cout<<"enter n:-";
    cin>>n;
    cout<<factorialN(n)<<endl;
    return 0;
}
