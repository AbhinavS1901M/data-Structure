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
void removeKTHnodefromEND(node*&head,int k){
    node*ptr1=head;
    node*ptr2=head;
    //move ptr2 bykth step..
    int count=k;
    while(k--){
        ptr2=ptr2->next;
    }
    if(ptr2==NULL){// k is equal to the the length of linked list..
        // we have to delete the head..
        node*temp=head;
        head=head->next;
        free(temp);
        return;
    }
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    //now ptr1 is pointing to the node before the kth node from end.
    //node to be deleted is ptr1->next.
    node*temp=ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);
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
 removeKTHnodefromEND(ll.head,5);
 ll.traverse(); 
 return 0;
}    