#include <iostream>

using namespace std;
class Distance
{
private:
    float feet,inches;
public:
    Distance():feet(0),inches(0)
    {
    }
    Distance(float f,float i) : feet(f),inches(i)
    {

    }
    void display()
    {
        cout<<"\n feet  : "<<feet<<"\n inches :"<<inches;
    }
    void setdistance(float fe,float in)
    {
        feet=fe;
        inches=in;
    }
    Distance operator++()
    {
        return Distance(++feet,++inches);
    }
     Distance operator ++ (int)
    {
        Distance(feet++,inches++);
    }
    void operator--()
    {
        --feet;
        --inches;
    }
    void operator--(int)
    {
        feet--;
        inches--;
    }
};
int main()
{
    Distance d1(2.5,7.25);
    Distance d2(3.5,6.75);
    Distance d3,d4;
    d3 = ++d1;
    d4=d2++;
    cout<<"\nthe feet and inches d1 objects  is ";
     d1.display();
     cout<<"\nthe feet and inches d2 objects is ";
     d2.display();
     cout<<"\nthe feet and inches d3 objects is ";
     d3.display();
     cout<<"\nthe feet and inches d4 objects is "; // little problem
     d4.display();
   /*
     cout<<"\nthe feet and inches d1 objects before increment ";
     d1.display();
     cout<<"\nthe feet and inches d1 objects before increment ";
     d2.display();
    ++d1;
    d2++;
    cout<<"\nthe feet and inches d1 objects after increment ";
    d1.display();
     cout<<"\nthe feet and inches d2 objects after increment ";
    d2.display();
    --d1;
    d2--;
    cout<<"\nthe feet and inches d1 objects after increment ";
     d1.display();
    cout<<"\nthe feet and inches d2 objects after increment ";
    d2.display();
*/
    return 0;
}
