#include <iostream>

using namespace std;
class A
{
    public:
    show()
    {
        cout<<"inside the class show class A function"<<endl;
    }
};
class B
{
    public:
    show()
    {
        cout<<"inside the class show class B function"<<endl;
    }
};
class C : public A,public B
{

};

int main()
{
    C c1;
    c1.A::show();
    c1.B::show();
    return 0;
}
