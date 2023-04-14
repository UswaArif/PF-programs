#include<iostream>
using namespace std;

int doubledPay(int d);

main()
{
    int days;
    cout<<"Enter the days:";
    cin>> days;

    int result = doubledPay(days);
    cout<< result;
}

int doubledPay(int d)
{
    int sum = d+1;
    if(d == 1)
    {
        return 1;
    }
    else if(d == 2)
    {
        return sum;
    }
    else if(d > 2)
    {
       for(int x=0; x<d; x++)
       {
          sum = sum + 1;
       }
       return sum;
    }
    
}