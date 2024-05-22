#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student *fun()
{
    Student *tahmid = new Student(84,8,3.45);
    
    return tahmid;
}
int main() 
{
    //Student rahim(54,10,4.55);
    Student *tahmid = fun();
    //Student *tahmid = new Student(54,10,4.55);
    cout<<tahmid->roll<<" "<<tahmid->cls
    <<" "<<tahmid->gpa<<endl;
    delete tahmid;
    return 0;
}