#include <iostream>
#include<string>
using namespace std;
class gradebook
{
public :
    void display(string course)
    {
        cout<<"welcome to the grade book class of "<<course;
    }
};
int main()
{
gradebook book1;
string mycourse;
cout<<"enter the name of my course "<<endl;
getline(cin,mycourse);
book1.display(mycourse);
    return 0;
}
