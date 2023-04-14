#include<iostream>
using namespace std;

string collatz(int n1,int n2);

main()
{
    int num1,num2;
    cout<<"Enter the number 1:";
    cin>> num1;
    cout<<"Enter the number 2:";
    cin>> num2;

    string result = collatz(num1,num2);
    cout<< result;
}

string collatz(int n1,int n2)
{
    string a="a",b="b";
    int count1=0;
    int count2=0;
    while(n1>1)
    {
        if(n1%2==0)
        {
            n1=n1/2;
            count1++;
        }
        else if(n1%2==1)
        {
            n1=n1*3+1;
            count1++;
        }
    }
    cout<<count1<< endl;

    while(n2>1)
    {
        if(n2%2==0)
        {
            n2=n2/2;
            count2++;
        }
        else if(n2%2==1)
        {
            n2=n2*3+1;
            count2++;
        }
    }
    cout<<count2<< endl;
    if(count1<count2)
    {
      return a;
    }
    else
    {
        return b;
    }
}