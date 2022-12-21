#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    ptr = new int ;
    cout<<"enter any integer value "<<endl;
    cin>>*ptr;
    cout<<"the  value stored in dynamically created is "<<*ptr;
    delete ptr;
    return 0;
}
