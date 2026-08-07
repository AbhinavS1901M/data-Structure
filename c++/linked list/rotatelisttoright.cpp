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
node*rotateBYk(node*&head, int k){
    if(!head||!head->next||k==0){
        return head;
    }
    int n=1;
    node*tail=head;
    while(tail->next!=NULL){
        n++;
        tail=tail->next;
    }
    k=k%n;
    if(k==0){
        return head;
    }
    tail->next=head;//make the linkedlist circular.
    node*temp=head;
    for(int i=0;i<n-k-1;i++){
        temp=temp->next;
    }
    node*newhead =temp->next;
    temp->next=NULL;
    return newhead;
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
    ll.head=rotateBYk(ll.head,2);
    ll.traverse();
    return 0;
}