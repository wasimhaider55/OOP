#include <iostream>
#include<string>
using namespace std;
class book
{
private:
    string course;
    public:
    void setcourse(string c)
    {
        course=c;
    }
    string getcourse()
    {
        return course;
    }
    void dispaly ()
    {
        cout<<"the name of your course is "<<getcourse();
    }
};
int main()
{
    book b1;
    string mycourse;
    cout<<"enter the name of your course "<<endl;
    getline(cin,b1.mycourse);
    b1.setcourse(mycourse);
    b1.dispaly();
    return 0;
}
