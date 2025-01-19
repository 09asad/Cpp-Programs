#include<iostream>         // Geeks for Geeks
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pgE[n];   // previous greater element 
    stack<int> st;
    pgE[0] = -1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) pgE[i]=-1;
        else pgE[i]=st.top();
        st.push(arr[i]);
    }
    // for(int i=0;i<n;i++){
    //     cout<<pgE[i]<<" ";
    // }
    // cout<<endl;
    int pgI[n];      // previous greater element ka idx
    stack<int> stt;
    pgI[0] = -1;
    stt.push(0);
    for(int i=1;i<n;i++){
        while(stt.size()>0 && arr[stt.top()]<=arr[i]){
            stt.pop();
        }
        if(stt.size()==0) pgI[i]=-1;
        else pgI[i]=stt.top();
        stt.push(i);
    }
    // for(int i=0;i<n;i++){
    //     cout<<pgI[i]<<" ";
    // }
    // cout<<endl;
    int ans[n];
    int i=0,j=0;
    while(i<n){       // i = arr ka idx
        while(j<n){         // j = pgI ka idx
            ans[i]=i-pgI[j];
            j++;
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}