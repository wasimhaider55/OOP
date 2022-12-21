#include <iostream>

using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0) ,inches (0.0) // default constructor
    {
    }
    Distance(int ft, float in) // feet(ft),inches(in)
    {
        feet= ft;
        inches = in;
    }
    void setdist(int f,float i)
    {
        feet = f;
        inches = i;
    }
    void getdist()
    {
        cout<<"enter the value for feet"<<endl;
        cin>>feet;
        cout<<"enter the value for inches "<<endl;
        cin>>inches;
    }
    void showdist()
    {
        cout<<"value  of  feet :"<<feet<<endl;
        cout<<"value of inches :"<<inches<<endl;
    }
    bool operator < (Distance d2) const
    {
        float bf1 = feet + inches/12;
        float bf2 = d2.feet + d2.inches/12;
        return (bf1<bf2)? true : false;
    }
    void operator+=(Distance d2)
    {
        feet+=d2.feet;
        inches+=d2.inches;
        while (inches>=12)
        {
            inches -=12;
            feet++;
        }

    }
};
int main()
{
Distance dist1(3,2.5);
Distance dist2(6,4.5);
if (dist1<dist2)
{
    cout<<" dist1 is less than dist2 "<<endl;
}
else
    cout<<"dist 1 is grater than dist 2 or ( equal to dist 2 )";
    dist1+=dist2;///dist1 = dist1 + dist2
    cout<<"\n the value of dist 1 is equal to "<<endl;
    dist1.showdist();
    return 0;
}
