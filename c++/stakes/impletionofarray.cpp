#include<iostream>
using namespace std;
class stack{
    int capicaty;
    int *arr;
    int top;
    public:
    stack(int c){
        this->capicaty=c;
        arr = new int[c];
        this->top=-1;
    }
    void push(int data){
        if(this->top==this->capicaty-1){
            cout<<"overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top]=data;
    }
    int pop(){
        if(this->top==-1){
            cout<<"underflow\n";
            return 0;
        }
        return this->arr[this->top--];
    }
    int getTop(){
        if(this->top==-1){
            cout<<"underflow\n";
            return 0;
        }
        return this->arr[this->top];
    }
    bool isempty(){
        return this->top==-1;
    }
    bool isfull(){
        return this->top==this->capicaty-1;
    }
    int size(){
        return this->top+1;
    }
};
int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<"\n";
    st.push(4);
    st.push(5);
    cout<<st.getTop()<<"\n";
    st.push(8);
    st.pop();
    st.pop();
    cout<<st.getTop()<<"\n";
    return 0;
}