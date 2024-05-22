#include<bits/stdc++.h>
using namespace std;
int main() 
{
    list<int> mylist = {10,20,30};
    // cout<<mylist.front()<<endl;
    // cout<<mylist.back()<<endl;
    cout<<*next(mylist.begin(),6)<<endl;//as it is iterator ; so, we use pointer
    
    return 0;
}