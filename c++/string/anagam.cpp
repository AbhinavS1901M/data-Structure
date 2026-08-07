#include<iostream>
#include<string>
#include<vector>
using namespace std;


bool isanagram(string s1, string s2){

    // create freq array..

    vector<int>freq(26,0);
    // if lengts are different for s1, s2 then return false.
    if(s1.length()!=s2.length()){
        return false;
    }
    // store frequency of character in s1 and s2..
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++; // for s1, we are increament freq of char.
        freq[s2[i]-'a']--; // for s2, we are decrement freq of char.
    }


    // checking if freq of every char is 0;
    for (int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}


int main(){
    string s1, s2;
    cout<<"Enter two string : ";
    cin>>s1>>s2;
    if(isanagram(s1,s2)){
        cout<<"strings are anagram"<<endl;
    }
    else{
        cout<<"strings are not anagram"<<endl;
    }
    return 0;
}