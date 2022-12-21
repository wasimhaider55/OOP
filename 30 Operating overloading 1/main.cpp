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
    int getcount()
    {
        return count;
    }
    void operator++ ()
    {
        ++count;
    }
};
int main()
{
    counter e1,e2;
    cout<<"\n e1 = "<<e1.getcount();
    cout<<"\n e2 = "<<e2.getcount();
    cout<<"pree increment"<<endl;
    ++e1;
    ++e2;
    ++e2;
    ++e2;
    ++e2;
     cout<<"\n e1 ="<<e1.getcount();
    cout<<"\n e2  ="<<e2.getcount();
    return 0;
}
