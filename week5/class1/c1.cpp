#include<iostream>
using namespace std;

int largest();
int number[9];
main()
{
    int sum =0;
   for(int x=0; x<9; x++)
   {
       cout<< "Enter the number" << x+1 << ":";
       cin>> number[x];
   }
   for(int x=0; x<9; x++)
   {
      sum = sum + number[x];
   }
   cout<< "The sum is:"<< sum << endl;

   int result = largest();
   cout<< "Large number is:"<< result << endl;

   int formula = result * (result+1)/2;
   int miss_number = formula-sum;
   cout<<"The missing number is:" << miss_number;
   
}

int largest()
{
    int large = -1;
    for(int idx=0; idx < 9; idx++)
    {
        if(large< number[idx])
        {
            large = number[idx];
        }
    }
    return large;
}