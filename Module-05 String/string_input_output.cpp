#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int x;
    cin>>x;
    // getchar();
    cin.ignore();
    string s;
    // cin>>s;
    //cin.getline(s,100);//only for char s[100] type
    getline(cin,s);
    cout<<x<<endl;
    cout<<s<<endl;
    cout<<s.size()<<endl;
    return 0;
}