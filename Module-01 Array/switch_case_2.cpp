#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x=5;
    switch(x%7)
    {
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
            break;
        default:
            cout<<"not match";
    }
    return 0;
}