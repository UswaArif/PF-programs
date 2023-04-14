#include<iostream>
using namespace std;

bool isFactorial(int n);

main()
{
    int num;
    cout<<"Enter the number:";
    cin>> num;

    int result = isFactorial(num);
    cout<< result;
}

bool isFactorial(int n)
{
    int a;
    int fac=1;
    a = n%10;
    for(int x=a; x>0;x--)
    {
       fac=fac*x;
    }
    
    if(fac == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}