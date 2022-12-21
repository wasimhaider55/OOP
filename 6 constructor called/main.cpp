#include <iostream>

using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
        cout<<"constructor called"<<endl;
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
int main()
{
 Distance dist1,dist2,dist3;
   dist2.setdist(25,25.5);
   dist1.setdist(5,5.5);
   cout<<"\n showing the detail of object  dist one "<<endl;
   dist1.showdist();
   cout<<"\n showing the detail of object dist two "<<endl;
   dist2.showdist();
   cout<<"\n showing the detail of object dist three "<<endl;
   dist3.showdist();
    return 0;
}
