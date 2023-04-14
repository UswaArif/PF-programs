#include<iostream>
using namespace std;

bool isLeap(int year);

main()
{
    int y;
    cout<<"Enter the year:";
    cin>> y;
    int result = isLeap(y);
    cout<<result;
}

bool isLeap(int year)
{
    if(year%4==0 && year%100==0 && year%400==0)
    {
        cout<<"It is a leap year";
        return 1;
    }
    else if(year%4==0 && year%100 != 0)
    {
        cout<<"It is a leap year";
        return 1;
    }
    else if(year%4 !=0)
    {
        cout<<"It is not a leap year";
        return 0;
    }
    else if(year%4 ==0 && year%100 ==0 && year%400 !=0)
    {
        cout<<"It is not a leap year";
        return 0;
    }
}