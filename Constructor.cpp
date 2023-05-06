#include <iostream>
using namespace std;

class Amit // Name of class[class tayar kela]
{
public:      // Data abstraction 0%
    int No1; // No1 is a variable which is integer
    int No2; // No2 is a variable which is integer

    void fun() // Function crated with void datatype i.e.it will not return anything
    {
        cout << "Inside fun\n";
    }

    void gun()
    {
        cout << "Inside gun\n";
    }

    Amit() // Default constructor
    {
        cout << "Inside default constructor\n";
        No1 = 0;
        No2 = 0;
    }

    Amit(int A, int B) // Parametrised constructor
    {
        cout << "Inside parameterised\n";
        No1 = A;
        No2 = B;
    }

    Amit(Amit &ref) // copy constructor
    {
        cout << "Inside copy constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;
    }

    ~Amit()//Destructor
    {
        cout << "constructor deleted\n";
    }
};

int main()
{
    cout << "Inside main()\n";
    Amit obj1; // Memory will be allocated

    obj1.fun(); // Calling function/behaviour fun from the main()
    obj1.gun(); // Calling function/behaviour gun from the main()

    cout << obj1.No1 << "\n";
    cout << obj1.No2 << "\n";

    Amit obj2(10, 20);
    cout << obj2.No1 << "\n";
    cout << obj2.No2 << "\n";

    Amit obj3(obj2); // Copy
    cout << obj3.No1 << "\n";
    cout << obj3.No2 << "\n";

    return 0;
}