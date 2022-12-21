#include <iostream>
#include<string>
#include "employee.h"
using namespace std;

int main()
{
employee e1,e2;
e1.setid(120);
e1.display();
cout<<endl;
e2.setname("wasim");
e2.display();
    return 0;
}
