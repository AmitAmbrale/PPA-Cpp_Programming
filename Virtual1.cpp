#include<iostream>
using namespace std;

 class Base
{
    public:
        int A,B;

        virtual void Fun()   //1000
        {
            cout<<"Inside Fun Base\n";
        }

        virtual void Gun()   //2000
        {
            cout<<"Inside Gun Base\n";
        }

        virtual void Sun()   //3000
        {
            cout<<"Inside Sun Base\n";
        }
};

class Derived:public Base
{
    public:
        int X,Y;
        void Fun()   //4000
        {
            cout<<"Inside Fun Derived\n";
        }

        virtual void Sun()   //6000
        {
            cout<<"Inside Sun Derived\n";
        }
        virtual void Run()   //6000
        {
            cout<<"Inside Sun Derived\n";
        }

};

int main()
{
    Base *bp=new Derived;
    cout<<sizeof(Base);

    bp->Fun();
    bp->Gun();
    bp->Sun();
//  bp->Run();
    return 0;
}