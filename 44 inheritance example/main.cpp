#include <iostream>

using namespace std;
class counter
{
protected:
 unsigned int count;
public:
    counter() : count (0)
    {
        cout<<"constructor of counter class(parent class) called"<<endl;
    }
  unsigned  int getcount()
    {
        return count;
    }
    void operator ++()
    {
     ++count;
    }
};
class counterD:public counter
{
    public:
        counterD()
        {
            cout<<"constructor of counterD class(child class ) called"<<endl;
        }
    void operator--()
    {
        --count;
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
