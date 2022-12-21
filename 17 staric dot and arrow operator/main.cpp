#include <iostream>
using namespace std;
struct student
{
    int id;
    float cgpa;
};
int main()
{
struct student *p;
struct student s;
s.id=10;
s.cgpa=3.75;
p=&s;
cout<<"this operator "<<p->id<<"  "<<p->cgpa<<endl;
cout<<"dot operator "<<s.id <<" "<<s.cgpa<<endl;
cout<<"stark  operator"<<(*p).id <<"  "<<(*p).cgpa<<endl;
cout<<"reference operator"<<(&s)->id <<" "<<(&s)->cgpa;

    return 0;
}
