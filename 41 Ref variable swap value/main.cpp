#include <iostream>

using namespace std;
void swap (int & , int &);
int main()
{
    int a1,a2;
    cout<<"enter the value of a1 "<<endl;
    cin>>a1;
    cout<<"enter the value of a2 "<<endl;
    cin>>a2;
    cout<<"the value of variable before swapping is "<<a1<<endl;
    cout<<"the value of variable before swapping is "<<a2<<endl;
    swap(a1,a2);
    cout<<endl;
    cout<<"the value of variable after swapping is "<<a1<<endl;
    cout<<"the value of variable after swapping is "<<a2<<endl;
    return 0;
}
void swap(int& a,int& b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
