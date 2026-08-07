#include<iostream>
#include<vector>
using namespace std;

int peakinmountainarray(vector<int> &input){
    int l=0;
    int r=input.size()-1;
    int ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(input[mid]>input[mid-1]){
            // increasing array..
            ans=max(ans, mid);
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int>input;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        input.push_back(x);
    }
    cout<<peakinmountainarray(input)<<"\n";
    return 0;

}