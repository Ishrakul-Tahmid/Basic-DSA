#include<bits/stdc++.h>
using namespace std;
namespace tahmid//more than class
{
    int age = 22;
    void hello()
    {
        cout<<"tahmid namespace"<<endl;
    }
    class taki{

    };
}
namespace taki//more than class
{
    int age2 = 20;
    void hello()
    {
        cout<<"taki namespace"<<endl;
    }
    class taki{

    };
}
using namespace tahmid;
// using namespace taki;//or taki:: (main e dekho)
int main() 
{
    // cout<<tahmid::age2<<endl;
    // cout<<tahmid::age<<endl;
    cout<<age<<endl;
    hello();
    taki::hello();
    return 0;
}