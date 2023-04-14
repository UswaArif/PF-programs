#include<iostream>
#include<conio.h>
using namespace std;

void mainHeader();
void clearScreen();

main()
{
    mainHeader();
    bool a =false;
    string p1,p2;
    string word1;
    char letter;
    char guess[10];
    int tries=3;
    cout<<"Player 1! Enter your name:";
    cin>> p1;
    cout<<"Player 2! Enter your name:";
    cin>> p2;
    clearScreen();
    cout<< p1 << " enter the word :";
    cin>> word1;
    clearScreen();
    for(int i=0; word1[i] !='\0'; i++)
    {
        guess[i] = '-';
    }
    while(true)
    {
       cout<< p2 << " enter the guess letter:";
       cin>> letter;
       for(int x=0; word1[x] !='\0'; x++)
       {
           //cout << word1[x] << endl;
         if(letter == word1[x])
         {
            guess[x] = letter;
            //cout<< guess << endl;
            a = true;
         }
         else
         {
             a= false;
         }
       }
        
        if(a == true && guess == word1)
        {
           cout<< guess;
           cout<<"You won the game."<< endl;
           break;
           
        }
        else if(a == false)
        {
            tries--;
            if(tries == 0)
            {
                cout<< guess << endl;
                cout<<"Wrong guess!"<< endl;
                cout<< p2 <<" You have 0 tries left.";
                cout<<endl;
                cout<< "**************************************************"<< endl;
                cout<<"PLAYER 2! YOU HAVE LOST!"<< endl;
                break;
            }
            else
            {
               cout<< guess << endl;
               cout<<"Wrong guess!"<< endl;
               cout<< p2 <<" You have "<< tries<<" tries left.";
            }
        }    
    }
    
    
}

void mainHeader()
{
   cout<<"*******************************************"<<endl;
    cout<<"***      WELCOME TO HANGMAN GAME        ***"<<endl;
    cout<<"*******************************************"<<endl;
    cout<< endl;
    cout<<"RULES :  YOU HAVE ONLY THREE TRIES TO GUESS THE WORD BY GUESSING RANDOM LETTERS"<< endl;
    cout<< endl;
    cout<<"BE SPECIFIC IN LOWER/UPPER CASE LETTERS."<< endl;
    cout<< endl;
}

void clearScreen()
{ //____clear screen_____
  cout << "Press any key to continue " << endl;
  getch();
  system("CLS");
}