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
void display(node* root){     // pre order
    if(root==NULL) return; 
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum(node* root){
    if(root==NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int product(node* root){    
    if(root==NULL) return 1;
    return root->val * product(root->left) * product(root->right);
}
int size(node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int maxTree(node* root){
    if(root==NULL) return INT_MIN;
    int leftMax = maxTree(root->left);
    int rightMax = maxTree(root->right);
    return max(root->val,max(leftMax,rightMax));
}
int minTree(node* root){
    if(root==NULL) return INT_MAX;
    int leftMax = minTree(root->left);
    int rightMax = minTree(root->right);
    return min(root->val,min(leftMax,rightMax));
}
int levels(node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
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
    
    display(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<product(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxTree(a)<<endl;
    cout<<minTree(a)<<endl;
    cout<<levels(a)<<endl;
    int height = levels(a) - 1;
    cout<<height<<endl;
}