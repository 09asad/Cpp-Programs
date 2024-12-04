#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0) return 1;  // base case
    return n*fact(n-1);  // recursive call
}
int main(){
    cout<<fact(5);
}