#include <iostream>
using namespace std;
enum Dsign {pos,neg};
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance():feet(0),inches(0.0)
    {
    }
    Distance(int ft, float in)
    {
        feet = ft;
        inches = in;
    }
    void getdist()
    {
        cout<<"enter feet"<<endl;
        cin>>feet;
        cout<<"enter inches "<<endl;
        cin>>inches;
    }
    void showdist() const
    {
        cout<<feet <<" : "<<inches;
    }
};
/////////////////////////////////////////////////////////////
class Distsign : public Distance
{
private:
    Dsign sign;
public:
    Distsign()
    {
        sign = pos;
    }
    Distsign(int ft,float in, Dsign sq=pos) :Distance(ft,in)
    {
        sign = sq;
    }
    void getdist()
    {
        Distance::getdist();
        char ch;
        cout<<"enter sign ( + or - ) : " ;
        cin >>ch;
        sign= (ch == '+') ? pos : neg;
    }
    void showdist()
    {
        cout<<((sign==pos) ? "(+)" : "(-) " ) ;
        Distance::showdist();
    }
};
int main()
{
Distsign alpha;
alpha.getdist();
Distsign beta(11,6.5);
Distsign gamma(100,5.5,neg);
cout<<"\n alpha ";
alpha.showdist();
cout<<"\n beta ";
beta.showdist();
cout<<"\n gamma ";
gamma.showdist();

    return 0;
}
