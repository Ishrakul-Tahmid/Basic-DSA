#include<bits/stdc++.h>
using namespace std;
int main() 
{
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);//O(logN)
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    if(s.count(1000))
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }
    return 0;
}