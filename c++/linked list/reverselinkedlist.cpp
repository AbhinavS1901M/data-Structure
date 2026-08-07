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
        node* new_node=new node(value);
        if(head==NULL){
            head=new_node;
            return;
        }
         node*temp=head;
         while(temp->next!=NULL){
            temp=temp->next;
         }
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
/*node*reverseLL(node*&head){
    node*prevptr=NULL;
    node*currptr=head;
    while(currptr!=NULL){
        node*nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    //when this is end ,prevptr is pointing to my last node which is new node..
    node*new_head=prevptr;
    return new_head;
}*/
node*reversellRecursion(node*&head){
    //base case..
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*new_head=reversellRecursion(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_head;
}
int main(){
    linkedlist ll;
 ll.insertAtTail(1);
 ll.insertAtTail(2);
 ll.insertAtTail(3);
 ll.insertAtTail(4);
 ll.insertAtTail(5);
 ll.insertAtTail(6);
 ll.traverse();
 //ll.head=reverseLL(ll.head);
 ll.head=reversellRecursion(ll.head);
 ll.traverse();
 return 0;
}