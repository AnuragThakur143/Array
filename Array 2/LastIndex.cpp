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
    v.push_back(2);
    v.push_back(8);
    v.push_back(7);
    v.push_back(4);

    int x = 8;
    int idx = -1;

    // for(int i=0;i<v.size();i++)  //forward process -> long 
    // {
    //     if(v[i]==x) idx = i;
    // }

    for(int i=v.size()-1;i>=0;i--)  //backward process -> short
    {
        if(v[i]==x) idx=i;
    }
    cout<<idx<<endl;

}