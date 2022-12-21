#include <iostream>

using namespace std;
class Date
{
    private:
    int day , month , year;
    public:
        Date(int d =25, int m=4, int y=1999)
        {
            day = d;
            month = m;
            year = y;
        }
    void printdate()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

int main()
{
 Date d1,d2(15,1,2000);
 d1.printdate();
 d2.printdate();

    return 0;
}
