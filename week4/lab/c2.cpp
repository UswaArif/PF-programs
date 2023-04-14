#include<iostream>
using namespace std;

int disMovies(string mov[5]);

main()
{
    string movies[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};

    int result = disMovies(movies);
    cout<<"The price of that movie is:"<< result;
}

int disMovies(string mov[5])
{
    string m;
    int price;
    cout<<"Enter the name of movie:";
    cin>> m;
   for(int i=0; i<5; i++)
   {
       if(mov[i] == m)
       {
           if(i%2==1)
           {
              price = 500-500*5/100;
           }
           else if(i%2==0)
           {
               price = 500-500*10/100;
           }
       }
   }
   return price;
}
