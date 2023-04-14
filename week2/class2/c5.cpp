#include<iostream>
#include<cmath>
using namespace std;

int secret(int a);

main()
{
    int x;
    cout<<"Enter the number:";
    cin>> x;

    int result = secret(x);
    cout<< result;
}

int secret(int a)
{
    int b,c;
    b=a%10;
    c=a/10;
    int power = pow(c,b);
    int mult = c * b;
    int diff = power - mult;
    return diff;
}