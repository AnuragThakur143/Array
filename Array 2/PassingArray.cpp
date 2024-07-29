#include<iostream>
using namespace std;
void display(int* a,int size) //int a[]
{
    for(int i=0;i<=size-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void change(int b[], int size) //int* b
{
    b[0] = 8;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;

    display(arr, size);
    change(arr, size);
    display(arr, size);
}