#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;

    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(node* head){      // best for printing node rather than recursion
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

void displayRec(node* head){   // O(n) space
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}

void revDisplayRec(node* head){  // O(n) space
    if(head==NULL) return;
    revDisplayRec(head->next);
    cout<<head->val<<" ";
}

int size(node* head){
    node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
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

    // display(a);
    
    // display node using recursion
    displayRec(a);
    cout<<endl;
    // display node in reverse using recursion
    revDisplayRec(a);
    cout<<endl;

    // print size of linked list
    cout<<size(a);
}