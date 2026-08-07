#include<iostream>
#include<vector>
using namespace std;

int binarysearchsortedrotated(vector<int> &input, int target){
    int l=0;
    int r=input.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(input[mid]==target){
            return mid;
        }
        if(input[mid]>=input[l]){
            if(target>=input[l] && target<=input[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        else{
            if(target>input[mid] && target<=input[r]){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
    }
    return -1;
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
    int target;
    cin>>target;
    cout<<binarysearchsortedrotated(input, target)<<"\n";
    return 0;
}