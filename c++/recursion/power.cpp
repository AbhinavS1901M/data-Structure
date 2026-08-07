#include<iostream>
using namespace std;
int power(int p,int q){
    //base case...
    if(q==0){
        return 1;
    }
    return p* power(p, q-1);
}
int main(){
    int p;
    int q;
    cout<<"enter base and exponent:";
    cin>>p>>q;
    int result=power(p,q);
    cout<<result;
return 0;
}