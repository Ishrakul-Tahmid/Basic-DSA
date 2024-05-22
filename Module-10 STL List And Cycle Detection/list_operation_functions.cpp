#include<bits/stdc++.h>
using namespace std;
int main() 
{
    list<int> mylist = {3,8,2,4,1,6,1,2};

    //mylist.remove(1);

    //mylist.sort();
    //mylist.sort(greater<>());
    //mylist.unique();

    mylist.reverse();
    for( int val:mylist)
        cout << val << " ";
    return 0;
}