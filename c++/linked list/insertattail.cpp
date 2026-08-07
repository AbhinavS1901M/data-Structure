#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        data=value;
        next=NULL;
    }
};
void insertAtTail(node*&head,int value){
    node* newnode=new node(value);
      // If list is empty
    if (head == NULL) {
        head = newnode;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //temp has reached last node..
    temp->next=newnode;
}
void traverse(node*head){
    while(head!=NULL){
        cout<<head->data<<" ->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node*head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    traverse(head);
    return 0;
}