#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);
    cout<<"enter elementsof v1:"<<endl;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    cout<<"enter elements of v2:"<<endl;
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    int ans_sum=0;
    set<int>s;
    for(auto ele:v1){
        s.insert(ele);
    }
    for(auto ele:v2){
        if(s.find(ele)!=s.end()){
            ans_sum+=ele;
        }
    }
    cout<<"ans:"<<ans_sum<<endl;
    return 0;
}