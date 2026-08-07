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
// traversal function..
void traverse(node* head){
    node*temp=head;
    while(temp!=NULL){
         cout<<temp->val<<"-> ";
         temp=temp->next;
    }
    cout<<"null"<<endl;
}
int main(){
    // creating nodes..
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    traverse(head);
    return 0;
}