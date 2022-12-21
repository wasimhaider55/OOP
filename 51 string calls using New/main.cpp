#include <iostream>
#include<string.h>
using namespace std;
class string
{
private:
    char* str;
public:
    string(char* s)
    {
        int length = strlen(s);
        str = new char[length+1];
        strcpy(str, s);
    }
    ~string()
    {
        cout<<"Deleting str "<<endl;
        delete[ ]str;
    }
    void dispaly()
    {
        cout<<str<<endl;
    }
};
int main()
{
   string s1("information technology"); // problem ambiguous
   cout<<"s1 = ";
   s1.dispaly();
    return 0;
}
