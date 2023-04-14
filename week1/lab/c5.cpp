#include<iostream>
using namespace std;
main()
{
    int area,vegetable,portion1,portion2;
    int seedcost,plantationcost,fertilizing,labor;
    cout<<"Enter the total farm area in acres:";
    cin>> area;
    cout<<"Enter the number of vegetables(1 or 2):";
    cin>> vegetable;
    if(vegetable == 2)
    {
        cout<<"Enter portion for 1st vegetable:";
        cin>> portion1;
        cout<<"Enter portion for 2nd vegetable:";
        cin>> portion2;
    }
    cout<<"Enter the seed cost:";
    cin>> seedcost;
    cout<<"Enter the plantation cost:";
    cin>> plantationcost;
    cout<<"Enter the fertilizing cost:";
    cin>> fertilizing;
    cout<<"Enter the labor cost:";
    cin>> labor;
    int sellingprice1,sellingprice2;
    int total_price;
    if(vegetable == 1)
    {
        cout<<"Enter vegetable sellin price:";
        cin>> sellingprice1;
        total_price = sellingprice1;
    }
    else if(vegetable == 2)
    {
        cout<<"Enter vegetable selling price 1:";
        cin>> sellingprice1;
        cout<<"Enter vegetable selling price 2:";
        cin>> sellingprice2;
        total_price = sellingprice1 + sellingprice2;
    }
     int revenue = total_price * area;
     cout<<"Revenue is:"<< revenue << endl;
     int cost = seedcost+plantationcost+fertilizing+labor;
     cost = cost * area;
     cout<<"Cost is:"<<cost << endl;
     if(cost > revenue)
     {
         cout<< "loss";
     }
     else{
         cout<<"profit";
     }
}