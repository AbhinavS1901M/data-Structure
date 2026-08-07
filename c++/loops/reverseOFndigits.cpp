#include<iostream>
using namespace std;

int main(){
    int n;
  int reverse=0,d;
    cout<<"enter n:";
cin>>n;


while(n!=0){
    d=n%10;
    reverse=10*reverse+d;
    n/=10;
}
    cout<<"reverse number:="<<reverse<<endl;

    return 0;
}


