#include <iostream>

using namespace std;
class time
{
    private:
    int hours;
    int minutes;
    int second ;
    public:
        time(int h=0,int m = 0, int s = 0)
        {
            settime(h,m,s);
        }
        void settime (int h, int m, int s)
        {
            sethours(h);
            setminutes(m);
            setsecond(s);
        }
        void sethours(int h)
        {
            if (h>=0 && h<24)
                hours = h;
            else
                hours =0;
        }
        void setminutes(int m)
        {
            if (m>=0 && m<60)
                minutes = m;
            else
                minutes =0;
        }
        void setsecond(int s)
        {
            if (s>=0 && s<60)
                second = s;
            else
                second = 0 ;
        }
        int gethours()const
        {
            return hours;
        }
        int getminutes()const
        {

            return minutes;
        }
        int getsecond()const
        {
            return second;
        }
        void print()const
        {
            cout<<gethours()<<":"<<getminutes()<<":"<<getsecond();
        }
};
int main()
{
time *ptr;
int h;
cout<<"enter the hours from keyboard "<<endl;
cin>>h;
cout<<"time is "<<endl;
ptr = new time(h,15,30);
ptr->print();

    return 0;
}
