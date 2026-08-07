#include<iostream>
#include<vector>
using namespace std;

int findpeak(vector<int> &input){
    int n=input.size();
    int l=0;
    int r=input.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(mid==0){
            if(input[mid]>input[mid+1]){
                return 0;
            }else{
                return 1;
            }
        }
        else if(mid==n-1){
            if(input[mid]>input[mid-1]){
                return n-1;
            }else{
                return n-2;
            }
        }
        else{
            if(input[mid]>input[mid-1] && input[mid]>input[mid+1]){
                return mid;
            }else if(input[mid]>input[mid-1]){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }//else closed
    }//while loop closed
    return -1;
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
    cout<<findpeak(input)<<"\n";
    return 0;
}