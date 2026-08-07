#include<iostream>
using namespace std;
int maxelement(int*arr,int idx, int n){
    //base case...
    if(idx==n-1){
        //we only have one element left,so it is the maximum..
        return arr[idx];
    }
    return max(arr[idx], maxelement(arr,idx+1,n));
    }
    int main(){
        int arr[]={3,6,3,2,5};
        int n=5;
        cout<<maxelement(arr, 0, n);
        return 0;
    }
