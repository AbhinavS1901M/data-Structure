#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>directory; //declartion..
    //insertion...
    directory["abc"]=789;
    directory["abhi"]=123;
    directory["anu"]=456;

    for(auto element:directory){
        cout<<"name-"<<element.first<<endl;
        cout<<"ph.no-"<<element.second<<endl;
    }
    return 0;
}