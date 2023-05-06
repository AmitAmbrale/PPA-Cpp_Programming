#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
    int Arr[5];  //Static memory allocation

     int *p=NULL;

     p=(int *)malloc(5*sizeof(int));    //Dyanmic memory allocation using malloc

     int *q=NULL;

     q=(int *)calloc(5,sizeof(int));     //Dyanmic memory allocation using calloc
     
     int *x=NULL;
     x=new int[5];

    free(p);
    free(q);
    delete []x;

    return 0;
}