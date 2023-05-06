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
        cout << "Inside Demo constructor\n";
    }
    ~Demo()
    {
        cout << "Inside Demo destructor\n";
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
        cout << "Inside gun of Hello\n";
    }
};

class PPA : public Hello
{
    public:
    int I,J;

    PPA()
    {
        I=50;
        J=60;
        cout << "Inside PPA constructor\n";
    }

    ~PPA()
    {
        cout << "Inside PPA destructor\n";
    }

    void sun()
    {
        cout << "Inside sun of PPA\n";
    }

};

int main()
{
    cout<<"Inside main\n";
    cout<<"Size of Demo : "<<sizeof(Demo)<<"\n";
    cout<<"Size of Hello : "<<sizeof(Hello)<<"\n";
    cout<<"Size of PPA : "<<sizeof(PPA)<<"\n";

    PPA pobj;

    pobj.fun();
    pobj.gun();
    pobj.sun();



    cout<<pobj.A<<"\n";
    cout<<pobj.B<<"\n";
    cout<<pobj.X<<"\n";
    cout<<pobj.Y<<"\n";
    cout<<pobj.I<<"\n";
    cout<<pobj.J<<"\n";

    return 0;
}