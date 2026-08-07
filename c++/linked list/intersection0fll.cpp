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
int getLength(node*head){
    node*temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
node*moveheadByk(node*head, int k){
    node*ptr=head;
    while(k--){
      ptr=ptr->next;
    }
    return ptr;
}
node*getIntersection(node*head1, node*head2){
    // step 1:calculate length of both linked list..
    int l1=getLength(head1);
    int l2=getLength(head2);
    // step2: find diff k between linked list and move longer linked list by k step..
    node* ptr1;
    node*ptr2;
    if(l1>l2){
        int k=l1-l2;
        ptr1=moveheadByk(head1,k);
        ptr2=head2;
    }
    else{//l2 >l1
         int k=l2-l1;
        ptr1=head1;
        ptr2=moveheadByk(head2,k);
    }
    // step3:compare ptr1 &ptr2 nodes..
    while(ptr1!=NULL){
      if(ptr1==ptr2){
        return ptr1;
      }
      ptr1=ptr1->next;
      ptr2=ptr2->next;
    }
    return NULL;
}
int main(){
    linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.traverse();
    linkedlist ll2;
    ll2.insertAtTail(6);
    ll2.insertAtTail(7);
    ll2.head->next->next=ll1.head->next->next->next;
    ll2.traverse();
    node*intersection=getIntersection(ll1.head, ll2.head);
    if(intersection!=NULL){
        cout<<intersection->val<<endl;
    }
    else{
        cout<<endl;
    }
    return 0;
}