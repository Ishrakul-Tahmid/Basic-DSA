#include<bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age,marks1,marks2;
    person(string name, int age, int marks1, int marks2)
    {
        this->name = name;
        this->age = age;
        this->marks1=marks1;
        this->marks2=marks2;
    }
    void hello()
    {
        cout<<"Hello inside object"<<endl;
        cout<<name<<" "<<age<<endl;
    }
    int total_marks()
    {
        return marks1+marks2;
    }
};
int main() 
{
    person taki("Ishrakul Tahmid",22,95,85);
    //cout<<taki.name<<" "<<taki.age<<endl;
    taki.hello();
    int a = taki.total_marks();
    cout<<a<<endl;
    return 0;
}