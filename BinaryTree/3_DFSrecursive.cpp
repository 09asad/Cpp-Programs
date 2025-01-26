#include<iostream>
#include<climits>
using namespace std;
class node{
public:
    int val;
    node* left;
    node* right;
    node(int val){     // constructor
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preOrder(node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";     // root
    preOrder(root->left);     // left
    preOrder(root->right);   // right
}
void inOrder(node* root){
    if(root==NULL) return;
    inOrder(root->left);     // left
    cout<<root->val<<" ";    // root
    inOrder(root->right);    // right
}
void postOrder(node* root){
    if(root==NULL) return;
    postOrder(root->left);     // left
    postOrder(root->right);    // right
    cout<<root->val<<" ";      // root
}
int main(){
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);
    // connection of tree
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    preOrder(a);
    cout<<endl;
    inOrder(a);
    cout<<endl;
    postOrder(a);
}