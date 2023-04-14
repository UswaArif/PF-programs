#include<iostream>
using namespace std;

int countLeapYears(int y1,int y2);

main()
{
    int year1,year2;
    cout<<"Enter the year1:";
    cin>> year1;
    cout<<"Enter the year2:";
    cin>> year2;

    int result = countLeapYears(year1,year2);
    cout<<result;
}

int countLeapYears(int y1,int y2)
{
    int count =0;
    int a,b,c,d,e,f,g,h,i;
    a = y1;
    b = y1+1;
    c = y1+2;
    d = y1+3;
    e = y1+4;
    f = y1+5;
    g = y1+6;
    h = y1+7;
    i = y1+8;
    if(a%4==0 && a%100==0 && a%400==0)
    {
        count = count + 1;
    }
    else if(a%4==0 && a%100 != 0)
    {
        count = count + 1;
    }
    if(b%4==0 && b%100==0 && b%400==0)
    {
        count = count + 1;
    }
    else if(b%4==0 && b%100 != 0)
    {
        count = count + 1;
    }
    if(c%4==0 && c%100==0 && c%400==0)
    {
        count = count + 1;
    }
    else if(c%4==0 && c%100 != 0)
    {
        count = count + 1;
    }
    if(d%4==0 && d%100==0 && d%400==0)
    {
        count = count + 1;
    }
    else if(d%4==0 && d%100 != 0)
    {
        count = count + 1;
    }
    if(e%4==0 && e%100==0 && e%400==0)
    {
        count = count + 1;
    }
    else if(e%4==0 && e%100 != 0)
    {
        count = count + 1;
    }
    if(f%4==0 && f%100==0 && f%400==0)
    {
        count = count + 1;
    }
    else if(f%4==0 && f%100 != 0)
    {
        count = count + 1;
    }
    if(g%4==0 && g%100==0 && g%400==0)
    {
        count = count + 1;
    }
    else if(g%4==0 && g%100 != 0)
    {
        count = count + 1;
    }
    if(h%4==0 && h%100==0 && h%400==0)
    {
        count = count + 1;
    }
    else if(h%4==0 && h%100 != 0)
    {
        count = count + 1;
    }
    if(i%4==0 && i%100==0 && i%400==0)
    {
        count = count + 1;
    }
    else if(i%4==0 && i%100 != 0)
    {
        count = count + 1;
    }
    if(y2%4==0 && y2%100==0 && y2%400==0)
    {
        count = count + 1;
    }
    else if(y2%4==0 && y2%100 != 0)
    {
        count = count + 1;
    }
    return count;
}

