#include<bits/stdc++.h>
using namespace std;
class person{
public:
string name;
int age;
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main() 
{
    person * tahmid = new person("Ishrak",22);
    person * taki = new person("tahmid ",23);

    // tahmid->name = taki->name;
    // tahmid->age = taki->age;
    *tahmid = *taki;
    delete taki;
    cout<<tahmid->name<<" "<<tahmid->age<<endl;//-> for dynamic
    return 0;
}