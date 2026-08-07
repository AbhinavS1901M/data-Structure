#include<iostream>
#include<vector>
using namespace std;
// to find the unique no of a given arrey where all the elements are being replaced twice with one value being unique..
int main (){
    int arr[]={2,3,1,3,2,1,4};
    int size=7;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}