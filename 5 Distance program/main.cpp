#include <iostream>

using namespace std;

int main()
{class Distance
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
};
  Distance dist1,dist2,dist3;
   dist3.setdist(25,25.5);
   dist3.showdist();

    return 0;
}
