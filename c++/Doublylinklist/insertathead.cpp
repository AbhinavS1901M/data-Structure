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
    void traverse(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void InsertAtHead(int val){
        node*new_node=new node(val);
        if(head==NULL){
            head =new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }
};
int main(){
    DoublyLinkList dll;
    dll.InsertAtHead(3);
    dll.InsertAtHead(2);
    dll.InsertAtHead(1);
    dll.traverse();
    return 0;
}