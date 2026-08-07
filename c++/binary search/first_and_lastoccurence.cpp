#include<iostream>
#include<vector>
using namespace std;

int lowerbound(vector<int> &input, int target){
    //first index>=target..
    int l=0;
    int r=input.size()-1;
    int ans=-1;
    while(l<=r){
    int mid=l+(r-l)/2;
    if(input[mid]>=target){
        ans=mid;
        r=mid-1;
    }else{
        l=mid+1;
    }

    }
    return ans;
}

int upperbound(vector<int> &input, int target){
    // first index>target...
    int l=0;
    int r=input.size()-1;
    int ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(input[mid]>target){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> input;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    int target;
    cin>>target;
    vector<int> result;
    int lb=lowerbound(input, target);
    if(lb== -1 || input[lb]!= target){
        result.push_back(-1);
        result.push_back(-1);
    }else{
        int ub=upperbound(input, target);
        result.push_back(lb);
        result.push_back((ub==-1? n:ub)-1);
    }
    cout<<result[0]<<" "<<result[1]<<"\n";
    return 0;
}