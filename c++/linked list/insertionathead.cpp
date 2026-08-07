#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* newnode=new node(val);
    newnode->next=head;
    head=newnode;
}
void traverse(node*head){
    while(head!=NULL){
        cout<<head->data<<" ->";
        head=head->next;
    }
    cout<<"null"<<endl;
}
int main(){
    node*head=NULL;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    traverse(head);
    return 0;
}