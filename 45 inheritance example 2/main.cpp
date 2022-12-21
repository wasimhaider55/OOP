//// problem in this program
#include <iostream>
using namespace std;
class counter
{
protected:
 unsigned int count;
public:
    counter() : count (0)
    {

    }
  unsigned  int getcount()
    {
        return count;
    }
    counter operator ++()
    {
    return counter (++count);
    }
};
class counterD:public counter
{
    public:
    counterD operator--()
    {
       return counterD (--count);
    }
};

int main()
{
counterD c1;
 cout<<"\n c1 is  = " <<c1.getcount();
 ++c1;
 ++c1;
 ++c1;
 cout<<"\n c1 is incremented  = " <<c1.getcount();
 --c1;
cout<<"\n c1 is  decremented = " <<c1.getcount();
    return 0;
}
