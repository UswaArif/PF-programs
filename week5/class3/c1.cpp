#include<iostream>
using namespace std;

int countBoomranges(int arr[],int len);

main()
{
    int a[7]={5,6,6,7,6,3,9};
    int length = sizeof(a)/sizeof(a[0]);

    cout<< countBoomranges(a,length);
}

int countBoomranges(int arr[],int len)
{
    int count = 0;
    for(int x=1; x<len; x++)
    {
       if(arr[x-1] == arr[x+1] && arr[x] != arr[x-1] && arr[x] != arr[x+1])
       {
           count++;
       }
    }
    return count;
}