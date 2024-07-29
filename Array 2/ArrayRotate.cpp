#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i, int j, vector<int>& b)
{
    while(i<=j)
    {
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    vector<int> v;

    int s;
    cout<<"Enter the size of vector: ";
    cin>>s;
    for(int i=0;i<s;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int n=v.size();

    int k;
    cout<<"Enter the value k(rotations): ";
    cin>>k;
    if(k>n) k = k%n;

    display(v);
    int i = 0;
    int j = v.size()-1;
    
    reversePart(0,n-k-1,v);
    //display(v);

    reversePart(n-k,n-1,v);
    //display(v);

    reversePart(0,n-1,v);
    display(v);
}