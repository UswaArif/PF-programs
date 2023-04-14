#include<iostream>
using namespace std;

int calculateBonus(int d);

main()
{
    int days;
    cout<<"Enter the days:";
    cin>> days;
    int result = calculateBonus(days);
    cout<<result;

}

int calculateBonus(int d)
{
    int bonus;
    if(d > 0 && d <= 32)
    {
        bonus = 0;
    }
    else if(d >= 33 && d <= 40)
    {
        bonus = (32*0)+(d-32)*325;
    }
    else if(d >= 41 && d <= 48)
    {
        bonus = (32*0)+(8*325)+(d-40)*550;
    }
    else if(d > 48)
    {
        bonus = (32*0)+(8*325)+(8*550)+(d-48)*600;
    }
    return bonus;
}