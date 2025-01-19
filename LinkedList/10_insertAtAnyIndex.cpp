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

class LinkedList{   // user defined data structure
public:
    node* head;
    node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        node* temp = new node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        node* temp = new node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            node* t = new node(val);
            node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtTail(10);   // {10}
    ll.display();
    ll.insertAtTail(20);   // {10,20}
    ll.display();
    ll.insertAtTail(30);   // {10,20,30}
    ll.insertAtHead(40);   // {40,10,20,30}
    ll.display();
    ll.insertAtHead(80);   // {80,40,10,20,30}
    ll.display();
    ll.insertAtIdx(2,70);   // {80,40,70,10,20,30}
    ll.display();
    
    cout<<"size of the linked list is "<<ll.size;
}