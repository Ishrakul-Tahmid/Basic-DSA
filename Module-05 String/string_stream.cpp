#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    getline(cin,s);
    //stringstream ss(s);//identify space//done by constructor/done automatically
    //or
    stringstream ss;
    ss<<s;//done manually
    string word;
    // ss>>word;//one word tramsfer from ss to word
    // cout<<"Word: "<<word<<endl;
    // ss>>word;
    // cout<<"Word: "<<word<<endl;
    // ss>>word;
    // cout<<"Word: "<<word<<endl;
    int cnt=0;
    while(ss>>word)
    {
        cout<<word<<endl;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}