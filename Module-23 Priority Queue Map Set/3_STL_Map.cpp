#include<bits/stdc++.h>
using namespace std;
int main() 
{
    map<string,int> mp;
    // mp.insert({"Tahmid", 24});
    // mp.insert({"Ishrak", 21});
    // mp.insert({"Taki", 23});
    mp["Tahmid"] = 24;//O(logN)
    mp["Ishrak"] = 21;
    mp["Taki"] = 23;

    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    //cout<<mp["Tahmid"]<<endl;
    // if(mp.count("Tahmid"))
    // {
    //     cout<<"ase"<<endl;
    // }
    // else
    // {
    //     cout<<"no"<<endl;
    // }
    return 0;
}