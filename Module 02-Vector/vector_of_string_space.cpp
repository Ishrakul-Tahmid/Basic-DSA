#include<bits/stdc++.h>
using namespace std;
int main() 
{
    //<int> -> known as template which help us
    //to work with any type of data type
    int n;
    cin>>n;
    cin.ignore();
    vector<string> v(n);
    for(int i=0; i<n; i++)
    {
        getline(cin,v[i]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<v[i];
    }
    return 0;
}