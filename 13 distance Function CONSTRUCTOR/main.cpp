#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0),inches(0) // default constructor
    {}
    Distance(int ft,float in) // argument constructor
    {
        feet = ft;
        inches = in;
        cout<<"argument constructor called "<<endl;
    }
    void getdist()
    {
        cout<<"enter feet "<<endl;
        cin>>feet;
        cout<<"enter inches ";
        cin>>inches; // problem
        cout<<endl;
    }
    void showdist()
    {
        cout<<"feet   : "<<feet<<endl;
        cout<<"inches :  "<<inches<<endl;
    }
    void add_dist (Distance, Distance);
};
void Distance :: add_dist ( Distance d2, Distance d3)
{
    inches = d2.inches + d3.inches;
    feet =0;
    if (inches >= 12) //  logical problem
    {
        inches  - 12.0;
        feet++;
    }
    feet = feet + d2.feet + d3.feet;
}
int main()
{
    Distance dist1, dist3;
    Distance dist2(11,11.5);
    dist1.getdist();
    dist3.add_dist(dist1,dist2);
    //display all
    cout<<"dist 1 ";
    dist1.showdist();
     cout<<"dist 2 ";
    dist2.showdist();
     cout<<"dist 3 ";
    dist3.showdist();




   /*
    cout<<"dist 1 "<<dist1.showdist();
    cout<<"\n dist 2 "<<dist2.showdist();
    cout<<"\n dist 3 "<<dist3.showdist();
    */

return 0;
}

