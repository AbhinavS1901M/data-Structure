#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node(int data){
        val=data;
        next=NULL;
    }
};
class linkedlist{
    public:
    node*head;
    linkedlist(){
        head=NULL;
    }
    void insertAtTail(int value){
        node* new_node= new node(value);
        if(head==NULL){
            //linkedlist is empty
            head=new_node;
            return;
        }
        node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        // temp as reached to the last node..
        temp->next=new_node;
    }
    void traverse(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
node*reversekLL(node*&head, int k){
    if(head==NULL || head->next==NULL){
        return head;
    }// base case..
    node*prevptr=NULL;
    node*currptr=head;
    int counter=0;
    while(currptr!=NULL && counter<k){
        node*nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        counter++;
    }
    if(currptr!=NULL){
        node*new_head=reversekLL(currptr,k);
        head->next=new_head;
    }
    return prevptr;
}
int main(){
     linkedlist ll;
 ll.insertAtTail(1);
 ll.insertAtTail(2);
 ll.insertAtTail(3);
 ll.insertAtTail(4);
 ll.insertAtTail(5);
 ll.insertAtTail(6);
 ll.insertAtTail(7);
 ll.insertAtTail(8);
 ll.traverse();
  ll.head=reversekLL(ll.head,2);
 ll.traverse(); 
 return 0;
}        
