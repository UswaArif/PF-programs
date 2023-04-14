#include<iostream>
using namespace std;

int sumDigits(int x,int y);

main()
{
    int n1,n2;
    cout<<"Enter the number 1:";
    cin>> n1;
    cout<<"Enter the number 2:";
    cin>> n2;

    int result = sumDigits(n1,n2);
    cout<< result;
}

int sumDigits(int x,int y)
{
    int a,add;
    int sum,b;
    for(int i=x; i<=y; i++)
    {
       a = i%10;
       b  = i/10;
       add = a + b;
       sum = sum + add;
       
    }
    
    return sum;
}