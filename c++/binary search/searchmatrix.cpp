#include<iostream>
#include<vector>
using namespace std;

bool searchmatrix(vector<vector<int>> &a, int target){
    int n=a.size(); // no. of rows..
    int m=a[0].size(); // no. of columns...
    int l=0;
    int r=n*m-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        int x=mid/m; //gives x cordinate..
        int y=mid%m; //gives y coordinate...
        if(a[x][y]==target){
            return true;
        }
        else if(a[x][y]<target){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>>a{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target;
    cin>>target;
    cout<<searchmatrix(a, target)<<"\n";
    return 0;
}