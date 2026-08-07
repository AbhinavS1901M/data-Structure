#include<iostream>

using namespace std;

// function defination...
int minofTwo(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
    
}
int main (){
    // function call....
    cout<<"min="<<minofTwo(12,54)<<endl;
    return 0;
}
