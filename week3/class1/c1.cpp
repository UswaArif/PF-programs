#include<iostream>
using namespace std;

bool isPrime(int n);
string truncatable(int no);

main()
{
  int num;
  cout<<"Enter the number:";
  cin>> num;

  int result = isPrime(num);
  string r = truncatable(num);
  cout<< r;
}

bool isPrime(int n)
{
    if(n == 1 || n == 0)
    {
        return 0;
    }
    else if(n == 2)
    {
        return 1;
    }
    for(int x=2; x<n; x++)
    {
        if(n % x == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

string truncatable(int no)
{
    int loopcount = 0;
    int primecount = 0;
    for(int i=no; i>0; i=i/10)
    {
      loopcount++;

      if(isPrime(i) == 1)
      {
        primecount++;
      }

      if(primecount == loopcount)
      {
        return "Right prime";
      }
      else if(primecount >= 1)
      {
          return "prime";
      }
      
      else
      {
          return "none";
      }


    }
}