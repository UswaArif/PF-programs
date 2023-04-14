#include<iostream>
#include<ctime>
#include<math.h>
using namespace std;

int generateRandom();
int generateSequence();

main()
{
    srand(time(0));
    int result = generateSequence();
    cout<< result;
}

int generateRandom()
{
    int value;
    value = rand() % 5 + 1;
}

int generateSequence()
{
    int digitcount = 0;
    int number = 0;
    int loopcount = 0;
    while(digitcount != 5)
    {
        int value = generateRandom();
        for(int x=number; x>0; x=x/10)
        {
            if(x%10 == value)
            {
                loopcount = 0;
                break;
                loopcount++;
            }
            if(loopcount == digitcount)
            {
                number = (number * 10)+value;
                digitcount++;
            }
        }
    }
    return number;
}