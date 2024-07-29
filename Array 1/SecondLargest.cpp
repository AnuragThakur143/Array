#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[8] = {3, 4, 5, 7, 12, 2, 9, 6};

    int max = INT_MIN;
    int Smax = INT_MIN;

    for(int i=0;i<=7;i++)
    {
        if(max<arr[i]) max = arr[i];
    }
    
    for(int i=0;i<=7;i++)
    {
        if(arr[i]!=max && Smax<arr[i]) Smax = arr[i];
    }
    cout<<Smax<<endl;

}