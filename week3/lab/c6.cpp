#include<iostream>
using namespace std;

bool check(int number,int divider);
int special(int n);

main()
{
    int num;
    cout<<"Enter the number:";
    cin>> num;

    int result = special(num);
    cout<< result;
}

bool check(int number,int divider)
{
    for(int x= divider; x>0; x=x/10)
    {
        int remainder = x%10;
        if(remainder == 0)
        {
            return false;
        }
        if(number % remainder != 0)
        {
            return false;
        }
    }
    return true;
}

int special(int n)
{
    
    for(int i=1111; i<=9999;i++)
    {
       if(check(n,i))
       {
           cout<< i << " ";
       }
    }
}