#include <iostream>

using namespace std;
class counter
{
private:
    unsigned int count;
public:
    counter():count(0)
    {

    }
    counter(int c):count(c)
    {

    }
   unsigned int getcount()
    {
        return count;
    }
    counter operator++()// pree increment overloaded
    {
     ++count;
     return counter(count);
    }
};
int main()
{
  counter e1,e2;
    cout<<"\n e1 = " <<e1.getcount();
    cout<<"\n e2 = "<<e2.getcount();
    ++e1;
    e2=++e1;
    cout<<"\n e1 = " <<e1.getcount();
    cout<<"\n e2 = "<<e2.getcount();

    return 0;
}
