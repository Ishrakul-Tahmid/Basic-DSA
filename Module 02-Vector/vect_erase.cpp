#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>v={1,2,3,4,5};
    // v.erase(v.begin()+2);
    v.erase(v.begin()+1,v.end()-1);//2 to 4 erase
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}