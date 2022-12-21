#include <iostream>

using namespace std;
class employ
{
private:
    static int employcount; /// static data member
    int id;
    string name;
public:
    employ()
    {
        employcount++;
        id = 0;
        name = "not set";
    }
    employ(int i,string n)
    {
    employcount++;
    id = i;
    name = n;
        }
        void display()
        {
            cout<<"\n name of employ is\ : "<< name;
            cout<<"\n id of employ is   : " << id;
            cout<<"\n total employ is   : " <<employcount;
        }
        int static getcount() // static member function
        {
            return employcount;
        }

};
int employ ::employcount =0;
int main()
{
employ e1,e2(120,"haider");
e1.display();
e2.display();
cout<<"\n the value stored in the employ count variable is "<<employ::getcount;
    return 0;
}
