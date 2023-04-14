#include<iostream>
using namespace std;

void combination(int n1,int n2);

main()
{
    int num1,num2;
    cout<<"Enter the number 1:";
    cin>> num1;
    cout<<"Enter the number 2:";
    cin>> num2;

    combination(num1,num2);
     
}

void combination(int n1,int n2)
{
    for(int i=n1; i<=n2; i++)
    {
        for(int j=n1; j<=n2; j++)
        {
            for(int k=n1; k<=n2; k++)
            {
                for(int l=n1; l<=n2; l++)
                {
                   if(i<j && j<k && k<l)
                   {
                       cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                   }
                }
            }
        }
    }
}