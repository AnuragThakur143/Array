#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int x;
    cout<<"Enter Aim: ";
    cin>>x;

    vector<int> v;

    int n;
    cout<<"Enter the array size: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<=v.size()-1;j++)
        {
            if(v[i]+v[j]==x)
            cout<<"("<<i<<","<<j<<")"<<endl;
            cout<<x;
        }
    }

}