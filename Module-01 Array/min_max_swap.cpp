#include<iostream>
#include<algorithm>//min max
#include<utility>//swap
using namespace std;
// void my_swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    // int c=min(a,b);//2 variable
    // cout<<c;
    // int d= max(a,b);
    // cout<<endl<<d;
    // int mn = min({a,b,c,d});//more than 2 variable
    // int mx = max({a,b,c,d});
    // cout<<mn<<" "<<mx<<endl;
    // my_swap(&a,&b);
    // cout<<a<<" "<<b;
    swap(a, b);
    cout << a << " " << b;
    return 0;
}