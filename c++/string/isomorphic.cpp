#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isIsomorphic(string s1, string s2){
    vector<int>v1(128,-1);
    vector<int>v2(128,-1);
    if(s1.size()!=s2.size()){ // if string size is not equal return false..
        return false;
    }
    for(int i=0;i<s1.length();i++){
        if(v1[s1[i]]!=v2[s2[i]]){// checking if value of character at index i match in both vectors.
           return false;
        }
        v1[s1[i]]=v2[s2[i]]=i; // storing string position in vectors for characters at index i.
    }
    return true;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(isIsomorphic(s1,s2)){
        cout<<"they are isomorphic"<<endl;
    }
    else{
        cout<<"they are not isomorphic"<<endl;
    }
    return 0;
}