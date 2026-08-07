#include<iostream>
using namespace std;
int f(int n){
    //base case...
    if(n<1){
    return 0;
}
    //go and print first (n-1) numbers...
     f(n-1);
    cout<<n<<" ";
}
int main(){
    cout<<"enter the number:";
    int n;
    cin>>n;
    f(n);
    return 0;
}