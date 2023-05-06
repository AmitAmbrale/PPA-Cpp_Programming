#include <iostream>
using namespace std;

class Base
{
public:
    int A,B;
    Base()
    {
       A=10; 
       B=20;
    }
};

int main()
{ 
    Base obj;
    Base obj1;
    int C;
    C=obj.A+obj1.B;
    cout<<C;


    return 0;
}