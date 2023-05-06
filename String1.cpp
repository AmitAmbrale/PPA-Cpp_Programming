#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char ch = 'D';

    char Name1[6]={'H','e','l','l','o','\0'};

    char Name2[]={'H','e','l','l','o','\0'};

    char Name3[]="Hello";

    cout<<strlen(Name1);

    return 0;
}