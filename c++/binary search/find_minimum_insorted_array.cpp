#include<iostream>
#include<vector>
using namespace std;

int findminimuminsortedrotated(vector<int> &input){
    if(input.size()==1){
        return input[0];
    }
    int l=0;
    int r=input.size()-1;
    if(input[l]<input[r]){
        // sorted arrey..
        return l;
    }
    while(l<=r){
        int mid=l+(r-l)/2;
        if(input[mid]>input[mid+1]){
            return mid+1;
        }
        if(input[mid]<input[mid-1]){
            return mid;
        }
        if(input[mid]>input[l]){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>input;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    cout<<findminimuminsortedrotated(input);
    return 0;

}