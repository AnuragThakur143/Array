#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    //input
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element to search: ";
    cin>>x;
    //search

    // for(int i=0;i<=n-1;i++)
    // {
    //     if(arr[i]==x)
    //     {
    //         cout<<"Present!";
    //         break;
    //     }
    //     else
    //     {
    //         cout<<"Not Found!";
    //         break;
    //     }
    // }


    //ALTER FOR SEARCH
    bool flag = false;  // false is not present
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"Element Found!";
    else cout<<"Element Not Found!";
    

    
}