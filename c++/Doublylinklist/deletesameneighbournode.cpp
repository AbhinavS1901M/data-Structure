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
    void DeleteSameNeighbourNode(node* &head,node* &tail){
        node*currNode=tail->prev;
        while(currNode!=head){
            node*prevNode=currNode->prev;
            node*nextNode=currNode->next;
            if(prevNode->val==nextNode->val){
                //we have to delete the curr node..
                prevNode->next=nextNode;
                nextNode->prev=prevNode;
                free(currNode);
            }
            currNode=prevNode;

        }
    }
    
};
int main(){
    DoublyLinkList dll;
    dll.InsertAtTail(2);
    dll.InsertAtTail(1);
    dll.InsertAtTail(1);
    dll.InsertAtTail(2);
    dll.InsertAtTail(1);
    dll.traverse();
    dll.DeleteSameNeighbourNode(dll.head,dll.tail);
    dll.traverse();
    return 0;

}  
