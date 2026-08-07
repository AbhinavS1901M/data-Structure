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
bool checkEqualLinkedList(node*head1 , node*head2){
    node*ptr1=head1;
    node*ptr2=head2;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return (ptr1==NULL && ptr2==NULL);
}
int main(){
    linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    linkedlist ll2;
    ll2.insertAtTail(1);
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);
    ll1.traverse();
    ll2.traverse();
    cout<<checkEqualLinkedList(ll1.head, ll2.head);
    return 0;
}