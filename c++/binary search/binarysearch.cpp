#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> &input, int target){
    // define search space...
    int l=0;
    int r=input.size()-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(input[mid]==target){
            return mid;
        }
        else if(input[mid]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
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
    cout<<binarysearch(input, target)<<"\n";
    return 0;
     }