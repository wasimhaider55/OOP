#include <iostream>

using namespace std;
class A
{
    public:
A()
{
    cout<<"constructor of class A called"<<endl;
}
~A()
{
    cout<<"destructor of class A called"<<endl;
}
};
class B : public A
{
    public:
    B()
    {
        cout<<"constructor of class B called "<<endl;
    }
   ~B()
    {
        cout<<"destructor of class B called "<<endl;
    }
};
class C : public B
{
    public:
    C()
    {
        cout<<"constructor of class C called"<<endl ;
    }
    ~C()
    {
        cout<<"destructor of class C called"<<endl ;
    }
};
int main()
{
    C c1;
    return 0;
}
