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

    int max = arr[0];  //instead of arr[0], can also use INT_MIN
    for(int i=1;i<=n-1;i++)
    {
        if(max<arr[i]) max = arr[i];
    }
    cout<<max;

}