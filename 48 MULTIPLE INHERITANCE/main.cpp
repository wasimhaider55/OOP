#include <iostream>
using namespace std;
const int  LEN = 80;
class employee
{
private:
    char name[LEN];
    unsigned long number;
public:
    void getdata()
    {
        cout<<"enter last name"<<endl;
        cin>>name;
        cout<<"enter  number "<<endl;
        cin>>number;
    }
    void putdata() const
    {
        cout<<"\n name  "<<name<<endl;
        cout<<"\n number "<<number<<endl;
    }
};
class student
{
private:
    char school[LEN];
    char degre[LEN];
public:
    void getedu()
    {
        cout<<"enter school "<<endl;
        cin>>school;
        cout<<"highest  degreed"<<endl;
        cin>>degre;
            }
            void putedu()
            {
                cout<<"school is "<<school<<endl;
                cout<<"degree is "<<degre<<endl;
            }
};
class manager : private employee,private student
{
private:
    char tittle[LEN];
    double dues;
public:
    void getdata()
    {
        employee::getdata();
        cout<<"enter tittle "<<endl;
        cin>>tittle;
        cout<<"enter golf club dues "<<endl;
        cin>>dues;
        student::getedu();
    }
    void putdata()
    {
        cout<<"tittle "<<tittle<<endl;
        cout<<"\n golf club dues is "<<dues<<endl;
        student::putedu();
    }
};
class scientest : private employee,private student
{
private:
    int pubs;
    public:
        void getdata()
        {
            employee::getdata();
            cout<<"number of publication is ";
            cin>>pubs;
            student::getedu();
        }
        void putdat()
        {
            employee::putdata();
            cout<<"the publication is "<<pubs<<endl;
            student::putedu();
        }
};
class labror : public employee
{

};

int main()
{
manager m1;
scientest s1;
labror ll;
cout<<"\n enter the data of manager 1 "<<endl;
m1.getdata();
cout<<"\n enter the data of scientist s1  "<<endl;
s1.getdata();
cout<<"\n enter the data of labror "<<endl;
ll.getdata();
cout<<"\n data on manager 1 ";
m1.putdata();
cout<<"\n data on scientest ";
s1.putdat();
cout<<"\n data on labror ";
ll.putdata();
    return 0;
}
