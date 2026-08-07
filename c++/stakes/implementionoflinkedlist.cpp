#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};
class stack{
    node* head;
    int capicity;
    int currsize;
    public:
    stack(int c){
        this->capicity=c;
        this->currsize=0;
        head=NULL;
    }
    bool isEmpty(){
        return this->head=NULL;
    }
    bool isFull(){
        return this->currsize==this->capicity;
    }
    void push(int data){
        if(this->currsize==this->capicity){
            cout<<"overflow\n";
            return;
        }
        node*new_node=new node(data);
        new_node->next=this->head;
        this->head=new_node;
        this->currsize++;
    }
    int pop(){
        if(this->head==NULL){
            cout<<"underflow\n";
            return 0;
        }
        node*new_head=this->head->next;
        this->head->next=NULL;
        node* tobeRemoved=this->head;
        int result=tobeRemoved->data;
        delete tobeRemoved;
        this->head=new_head;
        return result;
    }
    int getTop(){
        if(this->head==NULL){
            cout<<"underflow\n";
            return 0;
        }
        return this->head->data;
    }
    int size(){
        return this->currsize;
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