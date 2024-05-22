#include<bits/stdc++.h>
using namespace std;
int main() 
{
    list<int> mylist = {1,2,3,4};
    // list<int> newlist{100,200};
    //vector<int> v = {100,200};

    // mylist.push_back(100);
    // mylist.push_front(10);
    // mylist.pop_back();
    // mylist.pop_front();
    //mylist.insert(next(mylist.begin(),2),100);//Insert element at the third position
    // mylist.erase(next(mylist.begin(),2));

    //mylist.insert(next(mylist.begin(),2),{100,200,300});
    // list<int> newlist;
    //newlist = mylist; //or
    //newlist.assign(mylist.begin(),mylist.end());

    // mylist.insert(next(mylist.begin(),2),newlist.begin(),newlist.end());//complexity-O(N+K)
    // mylist.insert(next(mylist.begin(),2),v.begin(),v.end());//complexity-O(N+K)
    // mylist.erase(next(mylist.begin(),2),  next(mylist.begin(),4));
    // replace(mylist.begin(),mylist.end(),4,95);
    // for(int val:mylist) cout << val << " "; //
    //cout << endl;
    auto it = find(mylist.begin(),mylist.end(),4);
    //cout<<*it<<endl;
    if (it == mylist.end())
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"found"<<endl;
    }
    return 0;
}