#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];

    }
    cout<<"enter x:";
    int x;
    cin>>x;

    int occurance=-1;
    for(int i=0;i<v.size();i++){
        if(x==v[i]){
            occurance=i;

        }
    }
    cout<<occurance<<endl;
    return 0;
}