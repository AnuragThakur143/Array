#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // arr[0][0] = 4;
    cout<<arr[0][0]<<endl;
    cout<<arr[2][2]<<endl;
    // for(int i=0;i<=2;i++) cout<<arr[0][i]<<" ";
    // cout<<endl;

    // for(int j=0;j<=2;j++) cout<<arr[1][j]<<" ";
    // cout<<endl;

    // for(int k=0;k<=2;k++) cout<<arr[2][k]<<" ";
    // cout<<endl;

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        cout<<arr[i][j]<<" ";
        
        cout<<endl;
    }

}