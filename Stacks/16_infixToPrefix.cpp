#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;    // *, /
}
string solve(string val1, string val2, char ch){
    // we have to store prefix in ans (prefix is "op v1 v2")
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}
int main(){
    string s = "1+(2+6)*4/8-3";
    stack<string> val;   // operand stack
    stack<char> op;   // operator stack
    for(int i=0;i<s.length();i++){
        // check if s[i] is a digit(0-9)
        if(s[i]>=48 && s[i]<=57){     // ASCII from (48-57) is digit(0-9)
            val.push(to_string(s[i]-48));
        }
        else{  // if s[i] is a operator(+,-,*,/.(,))
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    // i have to do: op val1 val2
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();   // pop '(' from op
            }
            else if(priority(s[i]) > priority(op.top())) op.push(s[i]);
            else{  // priority(s[i]) <= priority(op.top())
                while(op.size()>0 && priority(s[i]) <= priority(op.top())){
                    // i have to do: op val1 val2
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // the op stack can have values, so make it empty (do same prev work: op val1 val2)
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
}