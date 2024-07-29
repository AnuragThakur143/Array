#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> v(5); //for size given
    // for(int i=0;i<5;i++)
    // {
    //     cin>>v[i];
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    cout<<endl<<"OR"<<endl;

    vector<int> v; //for size is not given
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}