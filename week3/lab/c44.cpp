#include <iostream>
using namespace std;

int NextPrime(int number);
bool isprime(int num);

main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    cout << NextPrime(n);
}

int NextPrime(int number)
{
    for (int i = 0; i < 1000; i++)
    {
        if (isprime(number) == true)
        {
            return number;
            break;

        }
        number++;

    }
}

bool isprime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}