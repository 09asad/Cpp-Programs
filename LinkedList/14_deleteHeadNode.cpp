#include<iostream>
using namespace std;
class node{      // user defined data type
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};

node* deleteHeadNode(node* head, node* target){
    if(head==target){
        head = head->next;
        return head;
    }
    node* temp = head;
    while(temp->next!=target){
        temp = temp->next;
    }
    temp->next = temp->next->next;
}
void display(node* head){ 
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
    node* head = a;
    display(head);
    head = deleteHeadNode(head,a);   // only for deletion of head node
    display(head);

}