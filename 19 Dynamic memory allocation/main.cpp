#include <iostream>
#include<string>
using namespace std;

int main()
{
string  *ptr;
ptr = new string ;
cout<<"enter name of students"<<endl;
getline(cin,*ptr);
cout<<"the name of students is "<<*ptr;
delete ptr;
    return 0;
}
