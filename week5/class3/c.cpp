#include<iostream>
using namespace std;

void posNegSort(int arr[],int len);
int findLargest(int array[],int size,int position);

main()
{
    int a[]={6,3,-2,5,8,2,-2};
    int length = sizeof(a)/sizeof(a[0]);

     posNegSort(a,length);
}

void posNegSort(int arr[],int len)
{
    for(int i=0; i<len; i++)
    {
        if(arr[i]>0)
        {
          int largeIndex=findLargest(arr,len,i);
          int temp = arr[i];
          arr[i] = arr[largeIndex];
          arr[largeIndex] = temp;
        }
    }
    cout<< arr[len];
}

int findLargest(int array[],int size,int position)
{
    int large = -1;
    int large_index;
    for(int x=position; x<size; x++)
    {
        if(large < array[x])
        {
            large=array[x];
            large_index=x;
        }
    }
    return large_index;
}