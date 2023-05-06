#include <iostream>
using namespace std;
class Demo
{
public:
    int A, B;           // Non static characteristics
    static int X, Y;    // Static characteristics

    Demo()              // Default constructor
    {
        A = 0;
        B = 0;
    };
};
// Initialisation of static characteristics
int Demo ::X = 10;
int Demo ::Y = 20;

int main()
{
    cout<<"Value of X  : "<<Demo::X<<"\n";//10
    cout<<"Value of X  : "<<Demo::Y<<"\n";//20

    Demo obj1;
    Demo obj2;

    cout << "Value of A from obj1: " << obj1.A<<"\n";//0
    cout << "Value of A from obj2: " << obj2.A<<"\n";//0

    obj1.A++;

    cout << "Value of A from obj1: " << obj1.A<<"\n";//1
    cout << "Value of A from obj2: " << obj2.A<<"\n";//0

    cout << "Value of X from obj1: " << obj1.X<<"\n";//Avoid kara[10]
    cout << "Value of X from obj2: " <<obj1.Y<<"\n";//Avoid kara[20]

    cout << "Size of demo class object is : " << sizeof(obj1)<< "\n";
    return 0;
}