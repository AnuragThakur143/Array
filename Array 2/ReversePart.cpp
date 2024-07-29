#include<iostream>
#include<algorithm>
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
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(11);
    v.push_back(9);
    v.push_back(6);

    display(v);
    int i = 0;
    int j = v.size()-1;
    
    reversePart(0,4,v);
    //reverse(v.begin(),v.end());
    display(v);
}