#include<iostream>
using namespace std;
main()
{
    int cost_1room,no_rooms,days,salestax;
    cout<<"Enter the cost of renting one room:";
    cin>>cost_1room;
    cout<<"Enter the number of rooms booked:";
    cin>> no_rooms;
    cout<< "Enter the number of days the rooms are booked:";
    cin>> days;
    cout<<"Enter the sales tax:";
    cin>>salestax;
    
    cout<<"             "<< endl;
    cout<<"             "<< endl;
    int cost;
    float discount;
     cost = no_rooms * cost_1room;
    cout<<"The cost of renting one room:" <<cost_1room<<endl;
    if(no_rooms == 10)
    {
        discount = cost_1room - cost_1room*10/100;
        cout<<"The discount on each room:"<< discount << endl;
    }
    else if(no_rooms == 20)
    {
        discount = cost_1room - cost_1room*20/100;
        cout<<"The discount on each room:"<< discount << endl;
    }
    else if(no_rooms == 30)
    {
        discount = cost_1room - cost_1room*30/100;
        cout<<"The discount on each room:"<< discount << endl;
    }
    
    cout<<"The number of rooms booked:" << no_rooms << endl;
    cout<< "The number of days the rooms are booked:" << days <<endl;
    float discount_days;
    if(days == 3)
    {
        discount_days = discount - discount*5/100;
    }
    float total_cost;
    total_cost = no_rooms * discount_days;
    cout<<"The total cost of the rooms:"<< total_cost << endl;
    float total_salestax;
    total_salestax = total_cost * salestax * 10/1000;
    cout<<"The total sales tax is:"<< total_salestax<< endl;
    int totalamount;
    totalamount = total_cost + total_salestax;
    cout<<"The total amount is:"<<totalamount<<endl;

}