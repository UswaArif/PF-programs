#include<iostream>
#include<ctime>
using namespace std;

void guess(int n);

main()
{
    int num;
    srand(time(0));
    num = rand() % 100;

    guess(num);
}

void guess(int n)
{
    int number;
    cout<<"Enter an integer greater than or equal to 0 and less than 100:";
    cin>> number;
    int tries = 3;
    while(tries !=0)
    {
       while(number >= 0 && number <= 100)
      {
        if(number == n)
        {
            cout<<"You guessed the corect number." << endl;
            break;
        }
        else if(number > n)
        {
            cout<<"Your guess is higher thn the number."<< endl;
            cout<<"Guess again!"<< endl;
        }
        else if(number < n)
        {
            cout<<"Your guess is lower than the number."<< endl;
            cout<<"Guess again!"<< endl;
        }
        else 
        {
            cout<<"Invalid input" << endl;
        }
        tries--;
        if(tries == 0)
        {
          cout<<"Sorry you lost!"<< endl;
         break;
        }
        cout<<"Enter an integer greater than or equal to 0 and less than 100:";
        cin>> number;
        
      }
      
      
    }
    
        
    

}