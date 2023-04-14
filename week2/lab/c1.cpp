#include<iostream>
using namespace std;

double pyramidVolume(int a,int b,int c,string u);

main()
{
   int length,width,height;
   string unit;
   cout<<"Enter the length(in meters):";
   cin>> length;
   cout<<"Enter the width(in meters):";
   cin>> width;
   cout<<"Enter the height(in meters):";
   cin>> height;
   cout<<"Enter the unit:";
   cin>> unit;
   double result = pyramidVolume(length,width,height,unit);
   if(unit == "centimeters")
   {
       cout<< result <<" cubic centimeters";
   }
   else if(unit == "kilometers")
   {
       cout<< result <<" cubic kilometers";
   }
   else if(unit == "millimeters")
   {
       cout<< result <<" cubic millimeters";
   }
}

double pyramidVolume(int a,int b,int c,string u)
{
   double uvol;
   
   double volume = (a*b*c) / 3;
   if(u == "centimeters")
   {
      uvol = volume * 1000000; 
   }
   else if(u == "kilometers")
   {
       uvol = volume/1000000000;
   }
   else if(u == "millimeters")
   {
       uvol = volume * 1000000000;
   }
   return uvol;
}