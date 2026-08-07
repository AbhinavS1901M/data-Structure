#include<iostream>
#include<stack>
using namespace std;

int BalancedSeq(string str){
    stack<char>st;
    int n=str.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='('){
            st.push('(');
        }
        else{
            if(!st.empty()){
                st.pop();
            }
            else{
                count++;
            }
        }
    }
    return count;
}
int main(){
    string str="((()))))))";
    cout<<BalancedSeq(str);
    return 0;
}