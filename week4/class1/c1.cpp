#include<iostream>
using namespace std;

int countLoneOnes(int n);

main()
{
    int num;
    cout<<"Enter the number:";
    cin>> num;
    cout<< countLoneOnes(num);
}

int countLoneOnes(int n)
{
    int count =0;
   
    int a;
    while(n != 0)
    {
        if(n == 11 || n == 111 || n == 1111)
        {
            break;
        }
       a = n%10;

       if(a == 1)
       {
           count++;
       }
       n=n/10;
       
    }
    return count;
}