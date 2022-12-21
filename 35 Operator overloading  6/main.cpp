#include <iostream>

using namespace std;
class Distance
{
    int feet;
    float inches;
public:
    Distance():feet(0),inches(0)
    {
    }
    Distance(int f,float in) :feet(f),inches(in)
    {
    }
    void showdist()const
    {
        cout<<" feet "<<feet<<endl;
        cout<<"inches "<<inches<<endl;
    }
    Distance operator + (Distance d2)const
    {
        int f = feet + d2.feet;
        float i = inches + d2.inches;
        if(i>=12)
        {
            i-=12;
            f++;
        }
        return Distance(f,i);
    }

};
int main()
{
   Distance dist1(3,1.5);
   Distance dist2(2,22.25);
   Distance dist3;
   dist3 = dist1+dist2;
   dist1.showdist();
   dist2.showdist();
   dist3.showdist();
    return 0;
}
