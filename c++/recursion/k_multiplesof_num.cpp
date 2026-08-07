#include<iostream>
using namespace std;
void f(int num, int k){
    //base case...
    if(k==0) return;
    //assumption..
    f(num, k-1); // this will print the first k-1 numbers..
    // self worl...
    cout<<(num * k)<<" ";    
}
int main(){
    f(8, 5);
    return 0;
}