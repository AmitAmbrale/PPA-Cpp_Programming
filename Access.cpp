#include <iostream>
using namespace std;

class Base
{
public:
    int A;

/*private:
    int B;

protected:
    int C;*/

public:
    Base()
    {
        A = 10;
        
    }
    void display()
    {
        cout<<&A;
    }
};

int main()
{ 
    Base obj;
    cout<<obj.A<<"\n";
    obj.display();


    return 0;
}