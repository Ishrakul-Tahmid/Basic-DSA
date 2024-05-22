#include<bits/stdc++.h>
using namespace std;
int main() 
{
    //string s = "Ishrakul Tahmid";
    //cout<<s.size()<<endl;
    //cout<<s.max_size()<<endl;
    // string a="jhiuh uhb hbh iuhb hbhhjj";
    // cout<<a.capacity()<<endl;
    // a="jhiuh uhb hbh iuhbkj hih ih h hhuh b";
    // cout<<a.capacity()<<endl;

    // string s = "Hello";
    // cout<<s<<endl;
    // s.clear();
    // cout<<s<<endl;
    // cout<<s.size()<<endl;

    // cout<<s.empty()<<endl;
    string s;
    cin>>s;
    cout<<s<<endl;
    s.resize(15,'x');//extra space filled with x
    cout<<s.size()<<endl;
    cout<<s;
    return 0;
}