#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string a = "Hello Taki";
    string b = " World";
    // a = a+b;
    // cout<<a<<endl;
    // cout<<b<<endl;

    // a.append(b);
    // cout<<a<<endl;

    // a.push_back('T');
    // cout<<a<<endl;

    // a.pop_back();
    // cout<<a<<endl;

    // a="Gelo";
    // a.assign("Gelo");
    // cout<<a<<endl;

    // a.erase(4,3);//(start index, len(koita char))
    // cout<<a<<endl;

    //erase + replace
    // a.replace(6,4,"Tahmid");
    // cout<<a<<endl;
    a.insert(5," Tahmid");//same as replace
    cout<<a<<endl;
    return 0;
}