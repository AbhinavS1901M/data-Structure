#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*prev;
    node*next;
    node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
class DoublyLinkList{
    public:
    node*head;
    node*tail;
  DoublyLinkList(){
        head=NULL;
        tail=NULL;
    }
    void traverse(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void InsertAtTail(int val){
        node*new_node=new node(val);
        if(tail==NULL){
            head =new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return;
    }
    void DeleteAtKthposition(int k){
        
        node*temp=head;
        int counter=1;
        while(counter<k){
            temp=temp->next;
            counter++;
        }
        //now temp is pointing to the kth position..
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
};
int main(){
    DoublyLinkList dll;
    dll.InsertAtTail(1);
    dll.InsertAtTail(2);
    dll.InsertAtTail(3);
    dll.InsertAtTail(4);
    dll.traverse();
    dll.DeleteAtKthposition(3);
    dll.traverse();
    return 0;
}