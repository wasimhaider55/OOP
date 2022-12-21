#include <iostream>
using namespace std;
class square
{
private:
    int side;
public:
    square(int s):side(s)
    {
       // side=s
    }
    square area()
    {
        cout<<"the area of square is equal to "<<side * side <<endl;
        return *this;
    }
    square permeter ()
    {
        cout<<"the parameter  of square is equal to "<<4* side <<endl;
    }
    };
int main()
{
    square sq(5);
    sq.area().permeter();/// cascading member function
    return 0;
}
