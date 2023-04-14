#include<iostream>
#include<cmath>
using namespace std;

bool isPrimPythTriple(int a,int b,int c);

main()
{
    int n1,n2,n3;
    cout<<"Enter the number 1:";
    cin>> n1;
    cout<<"Enter the number 2:";
    cin>> n2;
    cout<<"Enter the number 3:";
    cin>> n3;

    int result = isPrimPythTriple(n1,n2,n3);
    cout << result;
}

bool isPrimPythTriple(int a,int b,int c)
{
    int power1,power2,square,sum;
    if(a > b && a > c)
    {
       power1 = pow(b,2);
       power2 = pow(c,2);
       sum = power1 + power2;
       square = sqrt(sum);
       if(square == a)
       {
           return true;
       }
       return false;
    }
    else if(b > a && b > c)
    {
       power1 = pow(a,2);
       power2 = pow(c,2);
       sum = power1 + power2;
       square = sqrt(sum);
       if(square == b)
       {
           return true;
       }
       return false;
    }
    else if(c > b && c > a)
    {
       power1 = pow(b,2);
       power2 = pow(a,2);
       sum = power1 + power2;
       square = sqrt(sum);
       if(square == c)
       {
           return true;
       }
       return false;
    }
}