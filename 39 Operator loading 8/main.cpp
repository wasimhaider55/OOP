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
        cout<<"the value of feet is equal to "<<feet<<endl;
        cout<<"the value of inches is equal to "<<inches<<endl;
    }
    bool operator < (Distance d2) const
    {
        float bf1 = feet + inches/12;
        float bf2 = d2.feet + d2.inches/12;
        return (bf1<bf2)? true : false;
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
    return 0;
}
