#include <iostream>

using namespace std;
class Myclass
{
public:
    Myclass()
    {
        cout<<"constructor called "<<endl;
    }
    ~Myclass()
    {
        cout<<"destructor called "<<endl;
    }
};
int main()
{
    cout<<"i am in the main function "<<endl;
    Myclass obj1,obj2;
    return 0;
}

