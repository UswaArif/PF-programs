#include<iostream>
using namespace std;

int junctionOrSelf(int n);

main()
{
    int num;
    cout<< "Enter the number:";
    cin>> num;

    cout<< junctionOrSelf(num);
}

int junctionOrSelf(int n)
{
    int a;
    int i=0;
    while(i<n)
    {
        a = i%10;
        a = a+i;
        i++;
    }
    if(a == n)
    {
        cout<< "Junction number";
    }
    else
    {
        cout<< "Self number";
    }
}