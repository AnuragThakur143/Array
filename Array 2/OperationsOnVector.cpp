#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v; //no need to give size
    v.push_back(6);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    cout<<"Size is: "<<v.size()<<endl;
    cout<<"Capacity is: "<<v.capacity()<<endl;
    
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    cout<<"Size is: "<<v.size()<<endl;
    cout<<"Capacity is: "<<v.capacity()<<endl;


}