#include <iostream>                            // LeetCode 867
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    int m = matrix.size();          // rows
    int n = matrix[0].size();       // columns
    vector<vector<int>> t(n, vector<int>(m));       // In transpose -> m=n and n=m
    for (int i=0;i<n;i++)
    {
        for (int j= 0;j<m;j++)
        {
            t[i][j] = matrix[j][i];
        }
    }
    return t;
}
int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6}};
    for (int i=0;i<matrix.size();i++)
    {
        for (int j=0;j<matrix[0].size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<vector<int>> transposedMatrix = transpose(matrix);

    for (int i=0;i<transposedMatrix.size();i++)
    {
        for (int j=0;j<transposedMatrix[0].size();j++)
        {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}