#include"employ.h"
employee:: employee()
{
    id = 0 ;
    name = "not set";
}
employee ::employee(int i,float n)
{
    id =  i;
    name = n;
}
void  employee::display()
{
    cout<<"the id  of employee is "<<getid();
    cout<<"\n the name of employee is "<<getname();
}
void employee :: setid(int i)
{
    id= i;
}
void employee:: setname(string n)
{
    name = n;
}
int employee::getid ()
{
    return id;
}
string employee:: getname()
{
    return name;
}
