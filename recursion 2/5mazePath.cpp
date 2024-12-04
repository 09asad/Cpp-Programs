#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){  // starting row, staring column, ending row and ending column
    if(sr>er || sc>ec) return 0;    // out of bound
    if(sr==er && sc==ec) return 1;     // reached at destination
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}
void printPath(int sr, int sc, int er, int ec, string s){ 
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){     // reached at destination
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R'); // right
    printPath(sr+1,sc,er,ec,s+'D'); // down
}
int main(){
    cout<<"No of ways are "<<maze(0,0,2,2);   // 3x3 matrix: starts from (0,0) & ends at (2,2) AND only right and down allowed
    cout<<endl;
    printPath(0,0,2,2,"");
}