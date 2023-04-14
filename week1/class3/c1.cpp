#include<iostream>
using namespace std;
main()
{
    int diff_hours,diff_mints;
    int starting_hours,starting_mints,arrival_hours,arrival_mints;
    cout<<"Enter the exam starting hours(0 to 23):";
    cin>> starting_hours;
    cout<<"Enter the exam starting minutes(0 to 59):";
    cin>> starting_mints;
    cout<<"Enter the exam starting hours(0 to 23):";
    cin>> arrival_hours;
    cout<<"Enter the exam starting minutes(0 to 59):";
    cin>> arrival_mints;
    if(starting_hours==arrival_hours && starting_mints ==arrival_mints)
    {
        cout<<"On time";
    }
    else if(starting_hours=arrival_hours && starting_mints<arrival_mints)
    {
        cout<<"Late" << endl;
        diff_mints= arrival_mints-starting_mints;
        cout<< diff_mints<<" minutes after the start";
    }
    else if(starting_hours>arrival_hours && starting_mints==arrival_mints)
    {
        cout<<"Early" << endl;
        diff_hours=starting_hours-arrival_hours;
        diff_mints=starting_mints-arrival_mints;
        cout<< diff_hours<<":"<<diff_mints <<" hours before the start";
    }
    else if(starting_hours<arrival_hours && starting_mints<=arrival_mints)
    {
        cout<<"Late" << endl;
        diff_hours=arrival_hours-starting_hours;
        diff_mints= arrival_mints-starting_mints;
        cout<<diff_hours<<":"<< diff_mints<<" hours after the start";
    }
    else if(starting_hours>arrival_hours)
    {
        diff_mints=arrival_mints-arrival_hours;
        if(diff_mints >= 55 && diff_mints <60)
        {
            diff_mints=diff_mints%10;
            cout<<diff_mints<<" minutes befor the start";
        }
        
    }
    else if(starting_hours>arrival_hours && starting_mints>arrival_mints)
    {
        cout<<"Early"<< endl;
        diff_hours=starting_hours-arrival_hours;
        diff_mints=starting_mints-arrival_mints;
        cout<<diff_hours<<":"<<diff_mints<<" hours before the start";
    }
    else if(starting_hours<arrival_hours && starting_mints>=arrival_mints)
    {
        cout<<"Late" << endl;
        
        diff_mints= starting_mints+arrival_mints;
        cout<< diff_mints<<" minutes after the start";
    }
    else if(starting_hours>arrival_hours && starting_mints<arrival_mints)
    {
        cout<<"Early"<<endl;
        diff_mints=arrival_mints-starting_mints;
        cout<<diff_mints<<" minutes before the start";
    }
}