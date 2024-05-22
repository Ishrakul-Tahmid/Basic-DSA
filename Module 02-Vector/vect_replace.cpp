#include<bits/stdc++.h>
using namespace std;
int main() 
{
    // vector<int>v={1,23,4,5,7,8,5,45,6};
    // replace(v.begin(),v.end()-1,23,100);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // //vector<int>v={1,23,4,5,7,8,5,45,6};
    // // vector<int>::iterator it;
    
    // auto it = find(v.begin(), v.end()-1,6);//works as iterator
    // cout<<*it;

    vector<int> v = {1,2,30,4,5,6};
    
    auto it = find(v.begin(), v.end(), 30);

    // Check if the element is found before dereferencing the iterator
    if (it != v.end()) {
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}