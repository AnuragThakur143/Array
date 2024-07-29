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
    cout<<"Enter the element: ";
    cin>>x;

    int count = 0;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]>x) count++;
    }
    cout<<"Numbers greater than given element are: "<<count<<endl;
    

    
}