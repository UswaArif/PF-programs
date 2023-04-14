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

    while(number >= 0 && number <= 999)
    {
        if(number == n)
        {
            cout<<"You guessed the corect number." << endl;
            break;
        }
        else if(number > n && number <=100)
        {
            cout<<"Your guess is higher thn the number."<< endl;
            cout<<"Guess again!"<< endl;
        }
        else if(number < n && number <=100)
        {
            cout<<"Your guess is lower than the number."<< endl;
            cout<<"Guess again!"<< endl;
        }
        else if(number>100)
        {
            cout<<"Invalid input" << endl;
        }
        cout<<"Enter an integer greater than or equal to 0 and less than 100:";
        cin>> number;
        
    }

}