#ifndef DISTANCE _H
#define DISTANCE _H
#include <iostream>
using namespace std;
class Distance
{
    public:
 Distance ();
 Distance(int , float);
    void setdist(int,float);
     void getdist();
     void showdist();
    private:
    int feet;
    float inches;
};

