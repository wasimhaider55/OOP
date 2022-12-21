#include <iostream>

using namespace std;
int array[5]={10,20,30,40,50};
int& setandget(int);
int main()
{
    for(int i =0;i<5;i++)
    {
        cout<<array[i]<<endl;
    }
  cout<<setandget(4)<<endl;
    for(int i =0;i<5;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}
int& setandget(int i)
{
   return array[i];
    }
