#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter rows of matrix: ";
    cin>>m;
    int n;
    cout<<"enter columns of matrix: ";
    cin>>n;

    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }
    cout<<endl;

    //spiral
    
    int minr = 0, minc = 0;
    int maxr = m-1, maxc = n-1;
    int total = m*n; // For breaking internal loop
    int count = 0; //For breaking internal loop

    while(minr<=maxr && minc<=maxc)
    {
        // if(minr>maxr || minc>maxc) break; // Alter for breaking internal loop
        //right
        for(int j=minc;j<=maxc && count<total;j++)
        {
            cout<<a[minr][j]<<" ";
            count++;
        }
        minr++;
        
        // if(minr>maxr || minc>maxc) break;
        //down
        for(int i=minr;i<=maxr && count<total;i++)
        {
            cout<<a[i][maxc]<<" ";
            count++;
        }
        maxc--;
        
        // if(minr>maxr || minc>maxc) break;
        //left
        for(int j=maxc;j>=minc && count<total;j--)
        {
            cout<<a[maxr][j]<<" ";
            count++;
        }
        maxr--;
        
        // if(minr>maxr || minc>maxc) break;
        //up
        for(int i=maxr;i>=minr && count<total;i--)
        {
            cout<<a[i][minc]<<" ";
            count++;
        }
        minc++;
    }
}