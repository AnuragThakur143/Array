#include<iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int cols = 1;
    
    for(int i=0;i<n;i++)
    {
        if(matrix[i][0]==0)
            cols = 0;
        for(int j=1;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>0;j--)
        {
            if(matrix[i][0]==0 || matrix[0][j]==0)
                matrix[i][j] = 0;
        }
        if(cols==0)
            matrix[i][0] = 0;
    }
}