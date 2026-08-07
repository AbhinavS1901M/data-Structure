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
    bool isPalindromeDLL(node*head , node*tail){
        while(head!=tail && tail!=head->prev){
            if(head->val!=tail->val){
                return false;
            }
            head=head->next;
            tail=tail->prev;
        }
        return true;
    }
};
int main(){
    DoublyLinkList dll;
    dll.InsertAtTail(1);
    dll.InsertAtTail(2);
    dll.InsertAtTail(3);
    dll.InsertAtTail(3);
    dll.InsertAtTail(2);
    dll.InsertAtTail(1);
    dll.traverse();
    cout<<dll.isPalindromeDLL(dll.head , dll.tail);
    return 0;

}