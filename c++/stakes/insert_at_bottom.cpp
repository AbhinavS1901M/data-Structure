#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int>&st, int x){
    stack<int>temp;
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);//this is the point where x got inserted at bottom.
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    InsertAtBottom(st,100);
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<"\n";
    }
       return 0;
}    
