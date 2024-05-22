#include<bits/stdc++.h>
using namespace std;
//we use vector for pointer
int main() 
{
    vector<int> v={10,20,30,40,50,60};
    //vector<int>:: iterator it;//need for first type done in below
    // cout<<v[v.size()-1];
    cout<<v.back()<<endl;//same as previous method
    // cout<<v[0];
    cout<<v.front()<<endl;//same as previous method
    // for(it = v.begin(); it<v.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    for(auto it = v.begin(); it<v.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}