#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> v = {1,2,3,4,5};
    
    auto it = find(v.begin(),v.end(),3);

    // Check if the element is found before dereferencing the iterator
    if (it != v.end()) {
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}