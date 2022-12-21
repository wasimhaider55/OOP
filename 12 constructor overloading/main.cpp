#include <iostream>

using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0),inches(0) // default constructor
    {
    }
    Distance(int ft,float in) // argument constructor
    {
        feet = ft;
        inches = in;
        cout<<"argument constructor called "<<endl;
    }
    void setdist(int f,float i)
    {
        feet = f;
        inches = i;
    }
    void showdist()
    {
        cout<<"the value of feet is equal to "<<feet<<endl;
        cout<<"the value of inches is equal to "<<inches<<endl;
    }
};
int main()
{
Distance dist1,dist2,dist3(12,6.5);
dist3.showdist();
    return 0;
}
