#include<iostream>
using namespace std;
int sumofelements(int *arr, int idx, int n){
    //base case...
    if(idx==n-1){
        //idx is at the last stage so there is only one element under consideration..
        return arr[idx];
}
return arr[idx]+ sumofelements(arr, idx+1, n);
}
int main(){
    int arr[]={10,3,7,9,12,5};
    int n=6;
    cout<<sumofelements(arr, 0, n);
    return 0;
}