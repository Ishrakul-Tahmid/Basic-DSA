#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string sentence;
    getline(cin,sentence);
    string word;
    stringstream ss(sentence);
    map<string,int> mp;
    while(ss>>word)
    {
        mp[word]++;
    }
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mp["cricket"]<<endl;
    cout<<mp["she"]<<endl;
    return 0;
}