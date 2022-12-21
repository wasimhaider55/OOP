#include <iostream>
#include "interfece.h"
using namespace std;

int main()
{
    interface e1(5);
    cout<<"the value stored int the variable is "<<e1.getdata();
    e1.setdata(10);
    cout<<"\n the value  change stored int the variable is "<<e1.getdata();
    return 0;
}
