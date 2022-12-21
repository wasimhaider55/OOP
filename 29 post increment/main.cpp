#include <iostream>

using namespace std;

int main()
{
    int a = 100,b;
    b = a++;  // a assign 100 first  b than a increment
    cout<<"post increment "<<endl;
    cout<<"\n a = " <<a;
    cout<<"\n b ="<<b;
    return 0;
}
