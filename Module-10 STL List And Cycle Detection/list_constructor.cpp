#include<bits/stdc++.h>
using namespace std;
int main() 
{
    // list<int> mylist;
    // cout<<mylist.size( ) << endl; //0
    // list<int> mylist(10);
    // cout<<mylist.size( ) << endl; //0

    //list<int> mylist(10,5);
    //cout<<mylist.front( ) << endl; //0

     list<int> list2 = {1,2,3,4,5};
     //list<int> mylist(list2);

    //int a[5] = {1,2,3,4,5};
    vector<int> v = {1,2,3,4,5};
    // list<int> mylist(a,a+5); 
    list<int> mylist(v.begin(),v.end());

    for(auto it = list2.begin(); it!=list2.end(); it++)
    {
        cout<<*it<<endl;
    }
    // for(int val:mylist)
    //     cout<<val<<" ";
        
    return 0;
}