#include<iostream>
using namespace std;
main()
{
    int est_hours,est_mints,hours_arival,mints_arival,examtime,arivaltime,diff;
    int hourdiff,mindiff;
    cout<< "exam starting time hours is(an integer from 0 to 23):";
    cin>> est_hours;
    cout<< "exam starting time mints is(an integer from 0 to 59):";
    cin>> est_mints;
    cout<< "hours of arival(an integer from 0 to 23):";
    cin>> hours_arival;
    cout<< "mints of arival(an integer from 0 to 59):";
    cin>> mints_arival;

examtime=(est_hours*60)+est_mints;
cout<< "the exam time is:"<< examtime << endl;

arivaltime=(hours_arival*60)+mints_arival;
cout<< "The arival time is:"<< arivaltime << endl;

diff= arivaltime-examtime;
cout<< "The difference is:" << diff;



if(diff < -30)
{cout<< "early";  
}
else if(diff <= 0)
{cout<< "On time";
}
else
{cout<< "Late";}




}