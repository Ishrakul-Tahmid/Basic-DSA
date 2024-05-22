#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    // for(int i=1; i<=n; i++)// O(N^2)
    // for(int j=1; j<=n; j++)
    // cout<<"* "<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            cout<<"*"<<endl; 
        }
    }
    //here n is 10^3 is possible maximum
    return 0;
}