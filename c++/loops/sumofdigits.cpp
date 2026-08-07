#include<iostream>
using namespace std;
int  main(){
    int n,sum=0,d;
    cout<<"enter an integer\n";
    cin>> n;
    
    while(n!=0){
        d=n%10;
        sum+=d;
        n=n/10;
        cout<<d;
    }
    cout<<endl;
    cout<<"sum is:"<<sum<<endl;
    
    return 0;
}