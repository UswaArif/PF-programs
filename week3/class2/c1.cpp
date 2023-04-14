#include<iostream>
using namespace std;

void digit();

main()
{
    digit();
   
}

void digit()
{
    char l;
    int n=0;
    cout<< "Enter a letter:";
    cin>> l;
    while(l != '#')
    {
       

       cout<<"The letter you entered is:"<< l << endl;
       if(l == 'A' || l == 'B' || l == 'C' || l == 'a' || l == 'b' || l == 'c')
       {
           n = 2;
           cout<<"The corresponding telephone digit is: "<< n << endl;
       }
       else if(l == 'D' || l == 'E' || l == 'F' || l == 'd' || l == 'e' || l == 'f')
       {
           n = 3;
           cout<<"The corresponding telephone digit is: "<< n << endl;
       }
       else if(l == 'G' || l == 'H' || l == 'I' || l == 'g' || l == 'h' || l == 'i')
       {
           n = 4;
           cout<<"The corresponding telephone digit is: "<< n << endl;
       }
       else if(l == 'J' || l == 'K' || l == 'L' || l == 'j' || l == 'k' || l == 'l')
       {
           n = 5;
           cout<<"The corresponding telephone digit is: "<< n << endl;
       }
       else if(l == 'M' || l == 'N' || l == 'O' || l == 'm' || l == 'n' || l == 'o')
       {
           n = 6;
           cout<<"The corresponding telephone digit is: "<< n << endl;
       }
       else if(l == 'P' || l == 'Q' || l == 'R' || l == 'S' ||  l == 'p' || l == 'q' || l == 'r' || l == 's')
       {
           n = 7;
           cout<<"The corresponding telephone digit is: "<< n << endl;
       }
       else if(l == 'T' || l == 'U' || l == 'V' || l == 't' || l == 'u' || l == 'v')
       {
           n = 8;
           cout<<"The corresponding telephone digit is: "<< n << endl;
       }
       else if(l == 'W' || l == 'X' || l == 'Y' || l == 'Z' || l == 'w' || l == 'x' || l == 'y' || l == 'z')
       {
           n = 9;
           cout<<"The corresponding telephone digit is: "<< n << endl;
       }
       else
       {
           cout<<"Invalid input"<< endl;
       }
       cout<< endl;
       cout<<"Enter another uppercase/lowercase letter to find its corresponding telephone digit.To stop the program enter #." << endl;
       cout<<"Enter a letter:";
       cin>> l;
       
    }
    
}