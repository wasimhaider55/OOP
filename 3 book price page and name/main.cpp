#include <iostream>
#include<string>
using namespace std;
class book
{
private:
    string name;
    int pages;
    float price;
public:
void setname(string n)
{
     name=n;
}
void setpage(int p)
{
    pages=p;
}
void setprice(float p)
{
    price= p;
}
void display()
{
    cout<<"the pages of book is "<<pages<<" price  is  "<<price<<" and name  is "<<name<<endl;
}
};
int main()
{
book b1;
b1.setpage(20);
b1.setprice(120.2);
b1.setname("English");
b1.display();

    return 0;
}
