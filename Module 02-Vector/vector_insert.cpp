#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> v= {1,2,3,4,5};
    vector<int> v2= {10,2,3,4,50};
    v.insert(v.end(),v2.begin(),v2.end());//for one value insert we use only one value
// here pointer must use and for that
//we use v.begin which works like pointer
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}