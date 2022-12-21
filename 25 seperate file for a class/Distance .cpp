#include "Distance .h"
Distance ::Distance ()
{
    feet = 0;
    inches = 0;
}
Distance ::Distance (int ft,float in)
{
    feet = ft;
    inches = in;
}
void Distance :: setdist(int f,float i)
{
 feet = f;
inches = i;
}
void Distance ::getdist()
    {
        cout<<"enter the value for feet"<<endl;
        cin>>feet;
        cout<<"enter the value for inches "<<endl;
        cin>>inches;
    }
    void Distance ::showdist()
    {
        cout<<"the value of feet is equal to "<<feet<<endl;
        cout<<"the value of inches is equal to "<<inches<<endl;
    }
