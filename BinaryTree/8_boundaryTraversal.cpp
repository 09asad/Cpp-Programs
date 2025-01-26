#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class node{
public:
    int val;
    node* left;
    node* right;
    node(int val){ 
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
node* construct(int arr[], int n){
    queue<node*>q;
    node* root = new node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        node* temp = q.front();
        q.pop();
        node* l;
        node* r;
        if(arr[i]!=INT_MIN) l = new node(arr[i]);
        else l = NULL;
        if(j!=n && arr[j]!=INT_MIN) r = new node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}
void leftBoundary(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}
void leafBoundary(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    leafBoundary(root->left);
    leafBoundary(root->right);
}
void rightBoundary(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";    // for reverse (print after calls)
}
int main(){
    // construct
    int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28};     // INT_MIN = NULL
    int n = sizeof(arr)/sizeof(arr[0]);
    node* root = construct(arr,n);
    // boundary traversal
    leftBoundary(root);
    cout<<endl;
    leafBoundary(root);
    cout<<endl;
    rightBoundary(root->right);

}