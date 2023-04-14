#include<iostream>
using namespace std;

void chessBoard(char x,int y);

main()
{
    char a;
    int b;
    cout<<"Enter the chess board X coordinate in character(A to H):";
    cin>> a;
    cout<<"Enter the chess board Y coordinate in numbers(1 to 8):";
    cin>> b;

    chessBoard(a,b);
}

void chessBoard(char x,int y)
{
    if(x == 'A' && (y == 1 || y == 3 || y == 5 || y == 7))
    {
       cout<<"white";
    }
    else if(x == 'A' && (y == 2 || y == 4 || y == 6 || y == 8))
    {
        cout<<"black";
    }
    else if(x == 'B' && (y == 1 || y == 3 || y == 5 || y == 7))
    {
       cout<<"black";
    }
    else if(x == 'B' && (y == 2 || y == 4 || y == 6 || y == 8))
    {
        cout<<"White";
    }
    else if(x == 'C' && (y == 1 || y == 3 || y == 5 || y == 7))
    {
       cout<<"white";
    }
    else if(x == 'C' && (y == 2 || y == 4 || y == 6 || y == 8))
    {
        cout<<"black";
    }
    else if(x == 'D' && (y == 1 || y == 3 || y == 5 || y == 7))
    {
       cout<<"black";
    }
    else if(x == 'D' && (y == 2 || y == 4 || y == 6 || y == 8))
    {
        cout<<"White";
    }
    else if(x == 'E' && (y == 1 || y == 3 || y == 5 || y == 7))
    {
       cout<<"white";
    }
    else if(x == 'E' && (y == 2 || y == 4 || y == 6 || y == 8))
    {
        cout<<"black";
    }
    else if(x == 'F' && (y == 1 || y == 3 || y == 5 || y == 7))
    {
       cout<<"black";
    }
    else if(x == 'F' && (y == 2 || y == 4 || y == 6 || y == 8))
    {
        cout<<"White";
    }
    else if(x == 'G' && (y == 1 || y == 3 || y == 5 || y == 7))
    {
       cout<<"white";
    }
    else if(x == 'G' && (y == 2 || y == 4 || y == 6 || y == 8))
    {
        cout<<"black";
    }
    else if(x == 'H' && (y == 1 || y == 3 || y == 5 || y == 7))
    {
       cout<<"black";
    }
    else if(x == 'H' && (y == 2 || y == 4 || y == 6 || y == 8))
    {
        cout<<"White";
    }
    else
    {
        cout<<"You entered out of range.";
    }
}