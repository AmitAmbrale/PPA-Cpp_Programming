#include<iostream>
using namespace std;

//Application for specific programming
template <class T>//Template header
T Addition(T i,T j)//t -- Template arguement
{
    T result;
    result=i+j;//Bussiness logic
    return result;
}


int main()
{
    int i;
    float f;
    double d;

    i=Addition(10,11);
    cout<<i<<"\n";

    f=Addition(10.7f,89.5f);
    cout<<f<<"\n";

    d=Addition(10.8,70.8);
    cout<<d<<"\n";

    return 0;
}