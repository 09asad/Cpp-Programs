#include<iostream>
using namespace std;
class node{      // user defined data type
public:
    int val;
    node* next;
    node* prev;
    node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList{   // user defined data structure
public:
    node* head;
    node* tail;
    int size;
    DoublyLinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        node* temp = new node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next = temp;
            temp->prev = tail;     // extra
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        node* temp = new node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next = head;
            head->prev = temp;    // extra
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
            t->prev = temp;     // extra
            t->next->prev = t;   // extra
            size++;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty!";
            return;
        }
        head = head->next;
        if(head!=NULL) head->prev = NULL;    // extra
        if(head==NULL) tail = NULL;      // extra
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty!";
            return;
        }
        else if(size==1){     // extra
            deleteAtHead();
            return;
        }
        node* temp = tail->prev;     // extra
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is empty!";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;     // extra
            size--;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
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
    DoublyLinkedList dll;
    dll.insertAtTail(10);   // {10}
    dll.display();
    dll.insertAtTail(20);   // {10,20}
    dll.display();
    dll.insertAtTail(30);   // {10,20,30}
    dll.insertAtHead(40);   // {40,10,20,30}
    dll.display();
    dll.insertAtHead(80);   // {80,40,10,20,30}
    dll.display();
    
    dll.insertAtIdx(2,70);   // {80,40,70,10,20,30}
    dll.display();

    dll.deleteAtHead();     // {40,70,10,20,30}
    dll.display();

    dll.deleteAtTail();     // {40,70,10,20}
    dll.display();

    dll.deleteAtIdx(2);    // {40,70,20}
    dll.display();

    cout<<dll.getAtIdx(1);   // 70
}