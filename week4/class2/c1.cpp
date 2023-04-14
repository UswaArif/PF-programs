#include<iostream>
using namespace std;

int CountPosSumNeg(int arr[50],int length);

main()
{
    int a[50];
    int len;
    cout<<"Enter the length for array:";
    cin>> len;
    for(int x=0; x<len; x++)
    {
        cout<<"Enter the number:";
        cin>>a[x];
    }
    int result = CountPosSumNeg(a,len);
    cout<<"Negative Sum:"<< result;
}

int CountPosSumNeg(int arr[50],int length)
{
    int count = 0;
    int sum=0;
    for(int i=0; i<length; i++)
    {
        if(arr[i]>0)
        {
           count++;
        }
        else if(arr[i]<0)
        {
           sum = sum +arr[i];
        }
    }
    cout<<"Positive Count:"<<count<< endl;
    return sum;
}