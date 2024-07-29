#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v; //no need to give size
    v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<endl;


    cout<<v[1]<<endl;
}