#include<bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int;
    *a = 100;
    return a;
}
int main()
{
    int *p = fun();
    cout<<*p<<endl;
    int x=10;
    int *a = new int;//dynamic variable
    cout<<a<<endl;
    delete a;

    // float *f = new float;
    // *f = 1.215;
    // cout<<*f<<endl;
    return 0;
}