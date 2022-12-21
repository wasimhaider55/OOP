#include <iostream>

using namespace std;
class stack
{protected:
    int st[3];
    int top;
public:
    stack()
    {
        top = -1;
    }
    void push(int var)
    {
        ++top=var;
        cout<<var<<"push on the stack successfully "<<endl;
    }
    int pop ()
    {
        return top--;
    }
};
class stack2 : public stack
{
public:
    void push(int var1)
    {
        if (top == 2)
        {
            cout<<"Error ! stack is full "<<endl;
        exit(1);
    }
    stack::push(var1);
    }
    int pop()
    {
        if (top < 0)
        {
            cout<<"Error ! stack is full "<<endl;
            exit(1);
        }
        return stack::pop();
    }
};
int main()
{
stack2 s1;
s1.push(11);
s1.push(12);
s1.push(13);
cout<<s1.pop()<<" pop out of the stack is successfully "<<endl;
cout<<s1.pop()<<" pop out of the stack is successfully "<<endl;
cout<<s1.pop()<<" pop out of the stack is successfully "<<endl;
cout<<s1.pop()<<" pop out of the stack is successfully "<<endl; ///  problem is here
    return 0;
}
