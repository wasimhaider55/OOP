#include <iostream>

using namespace std;
class test
{
private:
    int x;
public:
    test(int value) : x(value)
    {
    }
    void print()
    {
        cout<<"the value of x is equal to "<<x<<endl;
        cout<<"the value of x is access trough this pointer is equal to  "<<this->x;
        cout<<"\n the value of x is access trough this pointer is equal to  "<<(*this).x;
    }
};
int main()
{
test obj(10);
obj.print();
    return 0;
}
