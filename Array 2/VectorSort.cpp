#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(10);
    v.push_back(6);
    v.push_back(8);

    // cout<<v[2]<<endl;
    // v.at(3) = 5;
    // cout<<v.at(3)<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    //sort
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    
}