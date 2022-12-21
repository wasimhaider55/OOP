#include <iostream>

using namespace std;
class example
{
private:
    int number;
public:
    example() : number (0)
    {

    }
    int getnumber()
    {
        return number;
    }
    void setnumber(int a)
    {
        if (a<0)
            cout<<"the negative value cannot be stored in the object "<<endl;
        else
        number =  a;
    }
};
int main()
{
  example e1,e2;
  int n;
  cout<<"enter the positive value to store of the data member "<<endl;
  cin>>n;
  e1.setnumber(n);
  e2.setnumber(3);
  cout<<"the object of e1 value is equal to "<<e1.getnumber();
   cout<<"\n the object of e2 value is equal to "<<e2.getnumber();

    return 0;
}
