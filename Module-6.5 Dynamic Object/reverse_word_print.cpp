#include<bits/stdc++.h>
using namespace std;
void print(stringstream & ss)
{
    string word;
    if(ss>>word)
    {
        print(ss);//when use if
        cout<<word<<endl;//only use it for while loop
    }
}
int main() 
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    // string word;
    // while(ss>>word)
    // {
    //     cout<<word<<endl;
    // }
    return 0;
}