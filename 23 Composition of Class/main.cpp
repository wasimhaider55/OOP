#include <iostream>
#include<string>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date() // default constructor
    {
        day = 0;
        month = 0;
        year = 0;
    }
    Date(int d,int m , int y) // parameter constructor
    {
        setdate(d,m,y);
    }
    void setdate(int d, int m , int y)
    {
        setday(d);
       setmonth(m);
        setyear(y);
    }
    void setday(int d)
    {
    day = d;
    }
    void setmonth(int m)
    {
        month= m;
    }
    void setyear(int y)
    {
        year = y;
    }
    void print()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
    };
    class employ
    {
    private :
        int id;
        string fastname;
        string lastname;
        Date   dateofhiring;
        Date   dateofbirth;
    public:
        employ(int i,string fn,string ln , Date doh, Date dob) // parameter constructor
        {

            id = i;
            fastname = fn;
            lastname = ln;
            dateofhiring = doh;
            dateofbirth  = dob;
        }
        void display()
        {
            cout<<"\n the id of employ is            : "<<id;
            cout<<"\n the first name of employ is    :"<<fastname;
            cout<<"\n the last name of employ is     :"<<lastname;
            cout<<"\n the date of birth of employ is :";
            dateofbirth.print();
            cout<<"\n the date of hiring of employ is:";
            dateofhiring.print();
        }

    };

int main()
{
    int d , m , y ;
    cout<<"\n enter the day of birth :";
    cin>>d;
     cout<<"\n enter the month of birth :";
    cin>>m;
     cout<<"\n enter the year of birth :";
    cin>>y;
    Date dob(d,m,y);
    cout<<"\n enter the day of hiring :";
    cin>>d;
     cout<<"\n enter the month of hiring :";
    cin>>m;
     cout<<"enter the year of hiring :";
    cin>>y;
    Date doh(d,m,y);
    employ e (120,"wasim","haider",doh,dob);
    e.display();
    return 0;
}
