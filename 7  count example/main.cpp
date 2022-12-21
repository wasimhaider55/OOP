#include <iostream>
using namespace std;
class counter
{
private:
    int count;
public:
    counter()
    {
    	count = 0;
        cout<<"constructor called "<<endl;
    }
    void inc_count()
    {
    count++;
    }
    int getcount()
    {
    return count;
    }
};

int main()
{
    counter c1,c2,c3;
    c1.inc_count();
    c2.inc_count();
    c3.inc_count();
    cout<<"the value of count variable c1 is equal to "<<c1.getcount()<<endl;
    cout<<"the value of count variable c2 is equal to "<<c2.getcount();
    cout<<"\n the value of count variable c3 is equal to "<<c3.getcount();


    return 0;
}
