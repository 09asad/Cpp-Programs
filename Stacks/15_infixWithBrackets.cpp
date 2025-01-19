#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;    // *, /
}
int solve(int val1, int val2, char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "1+(2+6)*4/8-3";
    stack<int> val;   // operand stack
    stack<char> op;   // operator stack
    for(int i=0;i<s.length();i++){
        // check if s[i] is a digit(0-9)
        if(s[i]>=48 && s[i]<=57){   // ASCII from (48-57) is digit(0-9)
            val.push(s[i]-48);
        }
        else{  // if s[i] is a operator(+,-,*,/.(,))
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    // i have to do val1<op>val2
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();   // pop '(' from op
            }
            else if(priority(s[i]) > priority(op.top())) op.push(s[i]);
            else{  // priority(s[i]) <= priority(op.top())
                while(op.size()>0 && priority(s[i]) <= priority(op.top())){
                    // i have to do val1<op>val2
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // the op stack can have values, so make it empty (do same prev work val1<op>val2)
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
}