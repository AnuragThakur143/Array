#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v)   //for Method-1(two pass)
{
    int n = v.size();
    int NoZ = 0;
    int NoO = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0) NoZ++;
        else NoO++;
    }

    for(int j=0;j<n;j++)
    {
        if(j<NoZ) v[j] = 0;
        else v[j] = 1;
    }

}

void sort0101(vector<int>& v)   //for Method-2(two pointers)
{
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0)
        {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    sort0101(v);   // sort01(v);
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
    cout<<endl;

}