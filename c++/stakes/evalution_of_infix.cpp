#include<iostream>
#include<stack>
#include<math.h>
#include<cctype>
using namespace std;

int calc(int v1, int v2, char op){
    if(op=='^'){
        return (int)pow(v1, v2);
    }
    if(op=='+'){
        return v1+ v2;
    }
    if(op=='*'){
        return v1*v2;
    }
    if(op=='/'){
        return v1/v2;
    }
    return v1-v2;
}
int precedence(char ch){ 
    if(ch=='^') return 3;
    if(ch=='*' || ch=='/') return 2;
    if(ch=='+'  || ch=='-') return 1;
    else return -1;
}
int eval(string &str){
    stack<int> nums;
    stack<char> ops;
    int n=str.size();
    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            nums.push(str[i]-'0');
        }else if(str[i]=='('){
            ops.push('(');
        }else if(str[i]==')'){
            while(!ops.empty() && ops.top()!='('){
                char op=ops.top();
                ops.pop();
                 int v2=nums.top();
                 nums.pop();
                 int v1=nums.top();
                 nums.pop();
                 nums.push(calc(v1,v2,op));
            }
            if(not ops.empty()) ops.pop();
        }else{
            while(not ops.empty() && precedence(ops.top())>=precedence(str[i])){
                 char op=ops.top();
                    ops.pop();
                    int v2=nums.top();
                    nums.pop();
                    int v1=nums.top();
                    nums.pop();
                    nums.push(calc(v1,v2,op));
            }
            ops.push(str[i]);
        }
    }
    while(not ops.empty()){
        char op=ops.top();
                ops.pop();
                 int v2=nums.top();
                 nums.pop();
                 int v1=nums.top();
                 nums.pop();
                 nums.push(calc(v1,v2,op));

    }
    return nums.top();
}
int main(){
    string str="1+(2*(3-1))+2";
    cout<<eval(str);
    return 0;
}