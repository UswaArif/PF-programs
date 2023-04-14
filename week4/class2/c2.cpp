#include<iostream>
using namespace std;

void SevenBoom(int arr[10],int n);

main()
{
    int a[10];
    int num;
    cout<<"Enter the number for the array:";
    cin>> num;
    for(int x=0; x<num; x++)
    {
        cout<<"Enter the number:";
        cin>> a[x];
    }

    SevenBoom(a,num);
}

void SevenBoom(int arr[10],int n)
{
    int flag = false;
    for(int i=0; i<n; i++)
    {
        
        if(arr[i]==7 || arr[i]%10==7)
        {
           flag = true;
        }
        else
        {
            flag = false;
        }
    }
    if(flag == true)
    {
        cout<<"Boom!";
    }
    else if(flag == false)
    {
        cout<<"there is no 7 in array";
    }
}