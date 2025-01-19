#include<iostream>            // LeetCode 148
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
node* merge(node* a, node* b){  // merge two sorted lists
    node* c = new node(100);    // dummy node "farzi"
    node* temp = c;
    while(a!=NULL && b!=NULL){
        if(a->val <= b->val){
            temp->next = a;
            a = a->next;
            temp = temp->next;
        }
        else{ // (a->val > b->val)
            temp->next = b;
            b = b->next;
            temp = temp->next;
        }
    }
    if(a==NULL) temp->next = b;
    else temp->next = a;
    return c->next;      
}
node* sortList(node* head) {
    if(head==NULL || head->next==NULL) return head;
    // to find the left middle
    node* slow = head;
    node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){ // condition for left middle
        slow = slow->next;
        fast = fast->next->next;
    }
    // now slow is at left middle
    node* a = head;
    node* b = slow->next;
    slow->next = NULL;
    a = sortList(a);
    b = sortList(b);
    node* c = merge(a,b);
    return c;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main(){
    node* a = new node(20);
    node* b = new node(10);
    node* c = new node(90);
    node* d = new node(15);
    node* e = new node(-50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
    cout << "Original List: ";
    display(a);
    cout<<endl;
    a = sortList(a);   // Capture the sorted list
    cout << "Sorted List: ";
    display(a);
}