#include<iostream>
#include<string>
using namespace std;

string jumpingFrog(int arr[],int len);

main()
{
    int a[5];
    int length = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<length; i++)
    {
        cout<<"Enter the jump for frog:";
        cin>> a[i];
    }
    cout<< jumpingFrog(a,length);
}

string jumpingFrog(int arr[],int len)
{
    int jump=1;
    int idx=0;
    while(idx < len)
    {
        if(arr[idx] == 0)
        {
           jump = 0;
           break;
        }
        else
        {
           jump++;
           idx=idx+arr[idx];
        }
    }

    if(jump == 0)
    {
        return "No chance :(";
    }
    else
    {
        return to_string(jump);
    }
}