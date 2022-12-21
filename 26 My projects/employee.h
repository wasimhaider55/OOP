#include<iostream>
#include<string>
using namespace std;
class employee
{
private:
    int id;
    string name;
public:
    employee();
    employee(int,string);
    void display();
    void setid(int);
    void setname(string);
    int getid();
    string getname();
};
