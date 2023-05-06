#include<iostream>
using namespace std;


//using namespace Marvellous;
namespace Marvellous
{
    class Demo
    {
        public:
        int A;
        int B;
        Demo()
        {
            A=0;
            B=1;
        
        }
    };
}


//using namespace Infosystems;
namespace Infosystems
{
    class Demo
    {
        public:
        int A;
        int B;
        Demo()
    {
        A=10;
        B=20;
    }
    };
    
}


int main()
{
    Marvellous::Demo obj1;
    Infosystems::Demo obj2;

    cout<<obj1.A;
    cout<<obj2.A;

}

