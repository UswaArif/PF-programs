#include<iostream>
using namespace std;
main()
{
    string gender;
    float A1,A2,A3,A4,A5,B;
    float body_weight,wrist_measurement,waist_measurement,hip_measurement,forearm_measurement;
    float body_fat,percentage;
    cout<<"Enter the gender:";
    cin>> gender;
    cout<<"Enter the body weight:";
    cin>> body_weight;
    cout<<"Enter the wrist measurement:";
    cin>> wrist_measurement;
    cout<<"Enter the waist measurement:";
    cin>> waist_measurement;
    cout<<"Enter the hip measurement:";
    cin>> hip_measurement;
    cout<<"Enter the forearm measurement:";
    cin>> forearm_measurement;
    
    if(gender == "female")
    {
       A1 = (body_weight * 0.723) + 8.987;
       A2 = wrist_measurement/3.140;
       A3 = waist_measurement * 0.157;
       A4 = hip_measurement * 0.249;
       A5 = forearm_measurement * 0.434;
       B = A1 + A2 - A3 - A4 + A5;
       body_fat = body_weight -B; 
       percentage = body_fat * 100/body_weight;
       cout<< "The body fat of female is:" << percentage;
    }
    else
    {
       A1 = (body_weight * 1.082) + 94.42;
       A2 = wrist_measurement * 4.15;
       B = A1 - A2;
       body_fat = body_weight - B; 
       percentage = body_fat * 100/body_weight;
       cout<<"The body fat of male is:" << percentage;
    }
}