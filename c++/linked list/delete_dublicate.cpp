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
void deleteDublicate(node*&head){
    node*curr_node=head;
    while(curr_node!=NULL){
        while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
            //delete curr_node->next;
            node*temp=curr_node->next;
            curr_node->next=curr_node->next->next;
            free(temp);
        }
        //loop end when curr_node and next node val diff
        // or linkedlist end;
        curr_node=curr_node->next;
    }
}

int main(){
    linkedlist ll;
 ll.insertAtTail(1);
 ll.insertAtTail(2);
 ll.insertAtTail(2);
 ll.insertAtTail(3);
 ll.insertAtTail(3);
 ll.insertAtTail(3);
 ll.insertAtTail(4);
 ll.insertAtTail(4);
 ll.traverse();
 deleteDublicate(ll.head);
 ll.traverse(); 
 return 0;
}        

