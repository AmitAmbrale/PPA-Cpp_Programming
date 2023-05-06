#include <iostream>
using namespace std;

//Parent class
class Demo
{
public:
    int A, B;

    Demo()
    {
        A=10;
        B=20;
        cout << "Inside demo constructor\n";
    }
    ~Demo()
    {
        cout << "Inside demo destructor\n";
    }
    void fun()
    {
        cout << "Inside fun of Demo\n";
    }
};

//Child class
class Hello : public Demo     //class Hello extends Demo
{
    public:
    int X,Y;

    Hello()
    {
        X=30;
        Y=40;
        cout << "Inside Hello constructor\n";
    }

    ~Hello()
    {
        cout << "Inside Hello destructor\n";
    }

    void gun()
    {
        cout << "Inside gun of Demo\n";
    }
};

int main()
{
    Hello hobj;

    hobj.fun();
    hobj.gun();


    cout<<hobj.A<<"\n";
    cout<<hobj.B<<"\n";
    cout<<hobj.X<<"\n";
    cout<<hobj.Y<<"\n";

    return 0;
}