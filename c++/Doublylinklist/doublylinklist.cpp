#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node*prev;
    node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
class DoublyLinkList{
    public:
    node*head;
    node*tail;
  DoublyLinkList(){
        head=NULL;
        tail=NULL;
    }
};
int main(){
    node* new_node=new node(1);
    DoublyLinkList dll;
    dll.head=new_node;
    dll.tail=new_node;
    cout<<dll.head->val<<endl;
    return 0;
}