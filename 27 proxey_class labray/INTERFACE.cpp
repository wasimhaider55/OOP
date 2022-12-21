#include "implementation.h"
#include "interface.h"
interface :: interface()
{
   ptr=new implementation();
}
interface::interface(int d)
{
    ptr = new implementation(d);
}
void interface ::setdata(int d)
{
   ptr->setvalue(d);
}
int interface ::getdata()
{
    return ptr->getvalue();
}
interface ::~interface()
{
    delete ptr;
}


