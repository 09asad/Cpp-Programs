#include<iostream>
using namespace std;
int stair(int n){
    if(n==1 || n==2) return n;
    if(n==3) return n+1;
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
    cout<<stair(5);
}
// single ,double and triple step allowed at a time