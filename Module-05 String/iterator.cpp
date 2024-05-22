#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string s,k;
    //string::iterator it;//works like iterator
    cin>>s>>k;
    // for(int i=0; i<k.size(); i++)
    // {
    //     cout<<k[i]<<endl;
    // }
    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;
    for(string::iterator it=k.begin();it<k.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
//shift + alt + down
//copy and paste at a time