// Class = Characteristic + Behaviours
// Class = Data + Function
#include <iostream>
using namespace std;

class Demo
{
public:
    int No1;
    int No2;

    void fun()
    {
        cout << "Inside fun\n";
    }
};

int main()
{
    Demo obj1;
    Demo obj2;

    cout << "Size of : " << sizeof(obj1) << "\n";

    obj1.No1 = 10;
    obj1.No2 = 20;
    obj2.No1 = 30;
    obj2.No2 = 40;

    obj1.fun(); // Inside fun
    obj2.fun(); // Inside fun

    cout << obj1.No1 << "\n"; // 10
    cout << obj1.No2 << "\n"; // 20
    cout << obj2.No1 << "\n"; // 30
    cout << obj2.No2 << "\n"; // 40

    return 0;
}