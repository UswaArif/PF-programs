#include<iostream>
using namespace std;

int MajorSum(int arr[50],int len);

main()
{
    int a[50];
    int length;
    cout<<"Enter the length of array:";
    cin>> length;

    for(int i=0; i<length; i++)
    {
        cout<<"Enter the number:";
        cin>> a[i];
    }

    int result = MajorSum(a,length);
    cout<< result;
}

int MajorSum(int arr[50],int len)
{
    int negSum=0;
    int posSum=0;
    int count =0;
    int div=-1;
    int neg;
    for(int x=0; x<len; x++)
    {
        if(arr[x]>0)
        {
           posSum = posSum+arr[x];
        }
        else if(arr[x]<0)
        {
           negSum = negSum+arr[x];
        }
        
        
        else if(arr[x]==0)
        {
            count++;
        }
    }
    neg = negSum/div;
    if(posSum > count && posSum > neg)
    {
        return posSum;
    }
    else if(neg < count && count > posSum)
    {
        return count;
    }
    else{
        return negSum;
    }
    
}