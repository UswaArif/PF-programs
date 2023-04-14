#include<iostream>
using namespace std;

void calculateYears(int hy);

main()
{
   int hyear;
   cout<<"Enter the human year:";
   cin>> hyear;

   calculateYears(hyear);
}

void calculateYears(int hy)
{
    int catyear,dogyear;
    int y;
   if(hy == 1)
   {
       catyear = 15;
       dogyear = 15;
   }
   else if(hy == 2)
   {
       catyear = 15 + 9;
       dogyear = 15 + 9;
   }
   else if(hy > 2)
   {
       y = hy -2;
       catyear = 4 * y + 24;
       dogyear = 5 * y + 24;
   }
   cout<<"Cat years:"<< catyear << endl;
   cout<<"Dog years:"<< dogyear << endl;
}