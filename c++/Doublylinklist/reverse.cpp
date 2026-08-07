#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*prev;
    node*next;
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
    void InsertAtTail(int val){
        node*new_node=new node(val);
        if(tail==NULL){
            head =new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return;
    }
    void ReverseDLL(node* &head,node* &tail){
        node*currptr=head;
        while(currptr){
            node*nextptr=currptr->next;
            currptr->next=currptr->prev;
            currptr->prev=nextptr;
            currptr=nextptr;
        }
        node*newhead=tail;
        tail=head;
        head=newhead;
    }
    
};
int main(){
    DoublyLinkList dll;
    dll.InsertAtTail(1);
    dll.InsertAtTail(2);
    dll.InsertAtTail(3);
    dll.InsertAtTail(4);
    dll.InsertAtTail(5);
    dll.InsertAtTail(6);
    dll.traverse();
    dll.ReverseDLL(dll.head,dll.tail);
    dll.traverse();
    return 0;

}