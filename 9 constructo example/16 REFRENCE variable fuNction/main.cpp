#include <iostream>

using namespace std;
void change (int &); // reference variable
int main()
{
    int x = 10;
    cout<<x;
 change(x);
 cout<<endl;
    cout<<x;
    return 0;
}
void change(int &y)
{
    y=y+10;
}
