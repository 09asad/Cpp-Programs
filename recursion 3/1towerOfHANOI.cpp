#include<iostream>
using namespace std;
void hanoi(int n, char s, char h, char d){    // normal order (s,h,d)
    if(n==0) return;
    hanoi(n-1,s,d,h);         // for top (n-1) disk, helper act as destination that'swhy (s,d,h)
    cout<<s<<" -> "<<d<<endl;
    hanoi(n-1,h,s,d);        // now, for that top (n-1) disk, helper act as source that'swhy (h,s,d)
}
int main(){
    int n;
    cout<<"Enter the no of disk ";
    cin>>n;
    hanoi(n,'A','B','C');      // A, B & C is source, helper & destination
}