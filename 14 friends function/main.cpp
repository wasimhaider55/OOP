#include <iostream>
using namespace std;
class box
{
private:
    int length;
public:
    box() : length(30) // constructor
    {}
    int friend printlength(box); // friend function
};
int printlength (box b)
{
    b.length = b.length + 10;
}
int main()
{
box obj1;
cout<<"length of box is "<<printlength(obj1)<<endl;
    return 0;
}
