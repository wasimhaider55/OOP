#include <iostream>
#include<cstring>   /// concatenating  string library must
using namespace std;

int main()
{
    char str1[10]= "helow";
    char str2[]= "word";
    strcat(str1,str2);  /// concatenating  string statment
    cout<<"str1 =" <<str1<<endl;
    cout<<"str2 =" <<str2<<endl;
    return 0;
}
