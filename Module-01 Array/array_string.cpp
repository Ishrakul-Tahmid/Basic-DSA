#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();//for avoidin string output missing string with space
    // int ar[n];
    // for(int i=1; i<=n; i++)
    // {
    //     cin>>ar[i];
    // }
    // for(int i=1; i<=n; i++)
    // {
    //     cout<<ar[i]<<endl;
    // }
    char s[100];
    //cin>>s;//take without space
    cin.getline(s,100);//take with space
    cout<<n<<endl;

    cout<<s<<endl;
    cout<<strlen(s)<<endl;
    return 0;
}