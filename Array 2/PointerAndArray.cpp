#include<iostream>
using namespace std;
int main()
{
    //giving address
    int arr[] = {3,4,2,1,5};
    int* ptr = arr; 
    cout<<ptr<<endl;
    int* ptr2 = &arr[0];
    ptr2[3] = 9;
    cout<<ptr2<<endl;
    cout<<ptr[0]<<endl;
    for(int i=0;i<=4;i++) cout<<ptr[i]<<" "; //i[ptr] // i[arr]




    
    cout<<"\nNext!"<<endl;

    *ptr = 8; //ptr[0] = 8
    ptr++;
    *ptr = 9;
    ptr--;




    cout<<"OR for next"<<endl;
    for(int j=0;j<=4;j++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;
    
    
    
    
}