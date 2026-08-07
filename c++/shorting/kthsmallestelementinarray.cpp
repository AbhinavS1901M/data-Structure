#include<iostream>
#include<limits.h>
using namespace std;
// done with quicksort sorting...

int partion(int arr[], int l, int r){
    int pivot=arr[r];
    int i=l;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}

int kthsmallest(int arr[], int l, int r, int k){
    if(k>0 && k<=r-l+1){
        
    int pos = partion(arr, l, r);// position of pivot element..
    if(pos-l==k-1){
        return arr[pos];
    }
    else if(pos-l>k-1){
    return kthsmallest(arr, l, pos-1, k);
    }
    else{
        return kthsmallest(arr, pos+1, r, k-(pos-l+1));
    }
    }
    return INT_MAX;
}

int main(){
    int arr[]={20,14, 43,4,12,3,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=6;

   int result= kthsmallest(arr, 0, n-1, k);
   cout<<result<<endl;
    
    return 0;
}