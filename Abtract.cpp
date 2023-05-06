#include<iostream>
using namespace std;

//Abstract class: It is a class which at least one pure virtual function in it
class Base
{
    public:
       int A,B;

       int Addition(int i,int j)      //Concrete function
       {
        return i+j;
       }
       virtual int Subtraction(int i,int j)    //Concrete function
       {
        return i-j;
       }
       virtual int Multiplication(int i,int j) = 0;      //Abstract function
};
class Derived:public Base
{
    public:
    int X,Y;

    int Subtraction(int i,int j)
    {
        return i-j;
    }
    int Multiplication(int i,int j)
    {
        return i*j;
    }
};

int main()
{
    Base *bp=new Derived();

    int Ret=0;
    Ret=bp->Addition(10,20);
    cout<<"Addition is : "<<Ret<<"\n";

    Ret=bp->Subtraction(10,20);
    cout<<"Subtraction is : "<<Ret<<"\n";

    Ret=bp->Multiplication(10,20);
    cout<<"Multiplication is : "<<Ret<<"\n";


    return 0;
}