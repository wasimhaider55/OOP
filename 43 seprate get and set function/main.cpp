#include <iostream>

using namespace std;
const int lemit=10;
class safearr
{
    private:
   int array[lemit];
    public:
        void putel(int n, int elvalue)
        {
            if (n<0 || n>=lemit)
            {
                cout<<"index out of bounds ";
                exit(1);
            }
            array[n]=elvalue;
        }
    int getel(int n ) const
    {
        if (n<0 || n>=lemit)
        {
            cout<<"index out of bounds ";
            exit(1);
        }
        return array[n];
    }
};
int main()
{
    int temp;
    safearr sa1;
    for(int j=0;j<lemit;j++)
    {
        sa1.putel(j,j*10);
    }
          for(int j=0;j<lemit;j++)
          {
              temp = sa1.getel(j);
           cout<<"element "<<j<<" is "<<temp<<endl;
    }

    return 0;
}
