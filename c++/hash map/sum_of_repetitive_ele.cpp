#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[input[i]]++; // store freq of every element..
    }
    int sum=0;
    for(auto ele:m){
        if(ele.second>1){
            sum+=ele.first;
        }
    }
    cout<<"ans-"<<sum<<endl;
    return 0;
}