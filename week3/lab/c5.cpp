#include<iostream>
using namespace std;

int Fibonacci(int n);

main()
{
    int num;
    cout<<"Enter the number:";
    cin>> num;

    int result = Fibonacci(num);
    cout<< result;
}

int Fibonacci(int n)
{
     int first = 0;
     int second = 1;
     int next = 0;
     
     if(n == 1)
     {
         return 1;
     }
     for(int x=2; x<=n; x++)
     {
        next = first + second;
        first = second;
        second = next;
     }
    return next;
}