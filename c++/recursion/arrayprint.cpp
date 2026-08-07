#include<iostream>
using namespace std;
void f(int *arr, int idx, int n){
    //base case...
    if(idx==n){
        return;
    }
    //self work...
    cout<<arr[idx]<<"\n";
    //assume that...
    f(arr, idx+1, n);
}


int main(){
    int n=5;
    int arr[]={9,4,6,2,7};
    f(arr, 0, n);


    return 0;
}