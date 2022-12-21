// overloading + - and = binary operator
#include <iostream>
using namespace std;
class ThreeD
{
private :
    int x,y,z;
public:
    ThreeD(){
    x=y=z=0;
    }
    ThreeD(int i,int j , int k)
    {
        x=i;
        y=j;
        z=k;
    }
    ThreeD operator + (ThreeD op2);
    ThreeD operator - (ThreeD op2);
    ThreeD operator = (ThreeD op2);
    void show();
};
ThreeD ThreeD ::operator+(ThreeD op2) // overloading +
{
    ThreeD temp;
    temp.x = x + op2.x;
    temp.y = y + op2.y;
    temp.z = z + op2.z;
    return temp;
}
ThreeD ThreeD ::operator-(ThreeD op2) //// overloading subtraction
{
    ThreeD temp;
    temp.x = x- op2.x;
    temp.y = y- op2.y;
    temp.z = z- op2.z;
    return temp;
}
ThreeD ThreeD ::operator=(ThreeD op2) ///// overloading assignment operator
{
    x=op2.x;
    y=op2.y;
    z=op2.z;
    return *this;
}
void ThreeD ::show()
{
    cout<<x<<","<<y<<","<<z;
}
int main()
{
ThreeD a(1,2,3),c;
ThreeD b(10,10,10);
cout<<"\noriginal value of a is ";
a.show();
cout<<"\noriginal value of b is ";
b.show();
c=b-a;
cout<<"\nb-a = ";
c.show();
    return 0;
}
