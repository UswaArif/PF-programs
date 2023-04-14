#include<iostream>
using namespace std;

int primorial(int n);
bool isprime(int num)
{
    int sum = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
         cout<< i <<" ";
         sum = sum+i;
    }
   

    return true;
}
main()
{
    int num;
    cout<<"Enter the number:";
    cin>> num;
    cout<< isprime(num);
    // int result = primorial(num);
    // cout<< result;
}

// int primorial(int n)
// {
    
// }