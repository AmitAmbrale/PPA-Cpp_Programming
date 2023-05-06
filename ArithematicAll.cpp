#include <iostream>
using namespace std;

class Arithematic
{
private:
    int No1;
    int No2;

public:
    Arithematic() // obj1
    {
        No1 = 0;
        No2 = 0;
    }
    Arithematic(int A, int B) // obj2
    {
        No1 = A;
        No2 = B;
    }
    int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }
    int Subtraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
    int Multiplication()
    {
        int Ans = 0;
        Ans = No1 * No2;
        return Ans;
    }
    float Division()
    {
        float Ans = 0;
        Ans = No1 / No2;
        return Ans;
    }
};

int main()
{
    Arithematic obj1;
    Arithematic obj2(10, 12);

    cout << obj1.Addition() << "\n"; // 22
    cout << obj2.Addition() << "\n"; // 0

    cout << obj1.Subtraction() << "\n"; // 0
    cout << obj2.Subtraction() << "\n"; //-2

    cout << obj1.Multiplication() << "\n"; // 0
    cout << obj2.Multiplication() << "\n"; // 120

    cout << obj2.Division() << "\n";        // 0
    cout << (float)obj2.Division() << "\n"; // 0.8
    return 0;
}