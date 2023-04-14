#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool strictlyIncreasing(int arr[], int size, int ignore)
{

    for(int x = 0; x < size - 1; x++)
    {
        if(x == ignore - 1 && ignore != size - 1)
        {
            if(arr[x] >= arr[x+2])
            {
                return false;
            }
            x = x+2;
        }
        else if(x == ignore - 1 && ignore == size - 1)
        {
            break;
        }
        else if(ignore == 0)
        {
            x++;
        }
        if(arr[x] >= arr[x+1])
        {
            return false;
        }
    }
    return true;  
}



bool sequence(int arr[], int size)
{
    for(int x = 0; x < size; x++)
    {
        if(strictlyIncreasing(arr, size, x))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[4]= {0, -2, 5, 6};
    cout << sequence(arr, 4);
}

