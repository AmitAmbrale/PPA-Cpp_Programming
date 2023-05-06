#include <iostream>
using namespace std;

class Hello
{
public:
    void gun(); // Declaration of a function
};

class Marvellous
{
public:
    void sun();
    void run();
};

class Demo
{
public:
    int A;

private:
    int B;

protected:
    int C;

public:
    Demo(int i, int j, int k)
    {
        A = i;
        B = j;
        C = k;
    }
    friend void fun();
    friend void Hello::gun();
    friend class Marvellous;
};
void fun() // Naked function//Definition of function
{
    Demo obj(10, 20, 30);
    cout << "Value of A : " << obj.A << "\n";
    cout << "Value of B : " << obj.B << "\n";
    cout << "Value of C : " << obj.C << "\n";
}
void Hello::gun() // Syntax for decalaring a member function outside the class
{                 // class name::function name()
    Demo obj(10, 20, 30);
    cout << "Value of A : " << obj.A << "\n";
    cout << "Value of B : " << obj.B << "\n";
    cout << "Value of C : " << obj.C << "\n";
}

void Marvellous::sun()
{
    Demo obj(10, 20, 30);
    cout << "Value of A : " << obj.A << "\n";
    cout << "Value of B : " << obj.B << "\n";
    cout << "Value of C : " << obj.C << "\n";
}

void Marvellous::run()
{
    Demo obj(10, 20, 30);
    cout << "Value of A : " << obj.A << "\n";
    cout << "Value of B : " << obj.B << "\n";
    cout << "Value of C : " << obj.C << "\n";
}
int main()
{
    fun();

    Hello obj2;
    obj2.gun();

    Marvellous obj3;
    obj3.sun();
    obj3.run();

    return 0;
}