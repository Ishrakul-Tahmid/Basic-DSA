#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    // Student(int r, int c, double g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // } or using this pointer/keyword
    Student(int roll, int cls, double gpa)
    {
        // this->roll = roll;
        // this->cls = cls;
        // this->gpa = gpa;
        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }

};
int main() 
{
    Student taki(29,9,4.9);
    cout<<taki.roll<<" "<<taki.cls<<
    " "<<taki.gpa<<endl;
    Student tahmid(45,10,4.95);
    cout<<tahmid.roll<<" "<<tahmid.cls<<
    " "<<tahmid.gpa<<endl;
    // taki.roll = 102;
    // taki.cls = 9;
    // taki.gpa = 5.00;

    // Student tahmid;
    // tahmid.roll = 5;
    // tahmid.cls = 20;
    // tahmid.gpa = 3.58;


    return 0;
}