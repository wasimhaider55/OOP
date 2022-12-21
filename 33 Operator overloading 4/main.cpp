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
   unsigned int getcount() const
    {
        return count;
    }
    counter operator++()// pree increment overloaded
    {
     return counter(++count);
    }
    counter operator++(int)// post increment overloaded
    {
     return counter(count++);
    }
};
int main()
{
   counter e1,e2;
    cout<<"\n e1 = " <<e1.getcount();
    cout<<"\n e2 = "<<e2.getcount();
    ++e1;
    e2=++e1; // pree increment
    cout<<"\n e1 = " <<e1.getcount();
    cout<<"\n e2 = "<<e2.getcount();
     e2=e1++; // post increment
     cout<<"\n e1 = " <<e1.getcount();
    cout<<"\n e2 = "<<e2.getcount();
    return 0;
}
