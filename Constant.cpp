#include <iostream>
using namespace std;

class Demo
{
public:
    int A;
    int B;
    const int C;
    const int D;

    Demo() : C(30), D(40)//All the values can be initialised by using member initialization list technique
    {
        A = 10;
        B = 20;
    }

    Demo(int i, int j, int k, int l) : C(k), D(l)
    {
        A=i;
        B=j;
    }

    void fun()
    {
        A++;
        B++;
       // C++;
        //D++;
    }

    void gun() const
    {
     /*   A++;
        B++;
        C++;
        D++;*/
    }
};
int main()
{
    Demo obj1;
    Demo obj2(50,60,70,80);
    const Demo obj3(90,100,110,120); 
    cout<<"Demo obj1[10,20,30,40]\n";
    cout << "Value of A : " << obj1.A << "\n";
    cout << "Value of B : " << obj1.B << "\n";
    cout << "Value of C : " << obj1.C << "\n";
    cout << "Value of D : " << obj1.D << "\n";

    cout<<"Demo obj2(50,60,70,80)\n";
    cout << "Value of A : " << obj2.A << "\n";
    cout << "Value of B : " << obj2.B << "\n";
    cout << "Value of C : " << obj2.C << "\n";
    cout << "Value of D : " << obj2.D << "\n";

    cout<<"const Demo obj3(90,100,110,120)\n";
    cout << "Value of A : " << obj3.A << "\n";
    cout << "Value of B : " << obj3.B << "\n";
    cout << "Value of C : " << obj3.C << "\n";
    cout << "Value of D : " << obj3.D << "\n";

    obj2.fun();


    //obj3.fun();   A constant object cannot call a non-constant method
    obj3.gun();//   A constant object can call a constant method

    return 0;
}