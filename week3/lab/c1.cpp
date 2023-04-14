#include<iostream>
using namespace std;

int collatz(int n);

main()
{
    int num;
    cout<<"Enter the number:";
    cin>> num;

    int result = collatz(num);
    cout<< result;
}

int collatz(int n)
{
    int count=0;
    while(n>1)
    {
        if(n%2==0)
        {
            n=n/2;
            count++;
        }
        else if(n%2==1)
        {
            n=n*3+1;
            count++;
        }
    }
    cout<<count<< endl;
    return n;
}