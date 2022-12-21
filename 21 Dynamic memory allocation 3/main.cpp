#include <iostream>
#include <string>
using namespace std;
struct student
{
    int id;
    string name;
    float cgpa;
};
int main()
{
    student *ptr;
    ptr = new student;
    cout<<"enter the id of student"<<endl;
    cin>>ptr->id;
    cout<<"enter the name of students "<<endl;
    cin>>ptr->name;
    cout<<"enter the cgpa of students "<<endl;
    cin>>ptr->cgpa;
    cout<<"\n the name of students is "<<ptr->name;
    cout<<"\n the id of students is "<<ptr->id;
    cout<<"\n the cgpa of students is "<<ptr->cgpa;
    delete ptr;

    return 0;
}
