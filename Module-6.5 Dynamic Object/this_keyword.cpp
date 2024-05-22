#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    person(string name, int age)
    {
        // this->name = name;
        // this->age = age;
        (*this).name = name;
        (*this).age = age;
    }
    void hello()
    {
        cout<<"Hello"<<endl;
    }
};
int main() 
{
    person taki("Ishrakul Tahmid",22);
    cout<<taki.name<<" "<<taki.age<<endl;
    taki.hello();
    return 0;
}