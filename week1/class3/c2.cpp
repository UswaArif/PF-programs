#include<iostream>
using namespace std;
main()
{
    float amount;
    float budget;
    cout<<"Enter the amount:";
    cin>>amount;
    string season;
    cout<<"Enter the season for vacations:";
    cin>> season;
    if(amount <= 100)
    {
        cout<< "somewhere in Bulgaria" << endl;
        if(season == "summer")
        {
            budget = amount * 30/100;
            cout<<"Camp - " << budget;
        }
        else if(season == "winter")
        {
            budget = amount * 70/100;
            cout<<"Hotel - " << budget;
        }
    }
    else if(amount > 100 && amount <=1000)
    {
        cout<< "somewhere in Balkans"<< endl;
        if(season == "summer")
        {
            budget = amount * 40/100;
            cout<<"Camp - " << budget;
        }
        else if(season == "winter")
        {
            budget = amount * 80/100;
            cout<<"Hotel - " << budget;
        }
    }
    else if(amount > 1000)
    {
        cout<< "somewhere in Europe"<< endl;
        budget = amount * 90/100;
        cout<<"Hotel - " << budget;
        
    }
}