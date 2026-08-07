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
void reversePrint(node*&head){
    //base case..
    if(head==NULL) return;
    // recursive case..
    reversePrint(head->next);
    cout<<head->val<<" ";
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
 reversePrint(ll.head);

 return 0;
}