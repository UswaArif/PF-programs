#include<iostream>
using namespace std;

int swap(int a,int b,int c);

main()
{
    int x,y,z;
    cout<<"Enter the number 1:";
    cin>> x;
    cout<<"Enter the number 2:";
    cin>> y;
    cout<<"Enter the number 3:";
    cin>> z;

    int result = swap(x,y,z);
    cout<< result;
}

int swap(int a,int b,int c)
{
    int d = a + b - c;
    return d;
}