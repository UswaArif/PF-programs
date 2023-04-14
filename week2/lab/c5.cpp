#include<iostream>
using namespace std;

void pointLocation(int h,int x,int y);

main()
{
    int size,a,b;
    cout<<"Enter the size of 1 block:";
    cin>> size;
    cout<<"Enter the x_coordinate:";
    cin>> a;
    cout<<"Enter the y_coordinate:";
    cin>> b;

    pointLocation(size,a,b);
}

void pointLocation(int h,int x,int y)
{
    if(x < 0 || x>3*h)
    {
        cout<<"Outside";
    }
    else if((x < h) && (y>h))
    {
        cout<<"Outside";
    }
    else if((x > 2*h) && (y>h))
    {
        cout<<"Outside";
    }
    else if(y < 0 || y>4*h)
    {
        cout<<"Outside";
    }
    else if((x>=0 && x<=3*h) && (y == 0))
    {
        cout<<"Border";
    }
    else if((x>=0 && x<=h) && (y == h))
    {
        cout<<"Border";
    }
    else if((x>=2*h && x<=3*h) && (y == h))
    {
        cout<<"Border";
    }
    else if(x==h && (y>=h && y <= 4*h))
    {
        cout<<"Border";
    }
    else if(x==2*h && (y>=h && y <= 4*h))
    {
        cout<<"Border";
    }
    else if(x==0 && (y>=0 && y <= h))
    {
        cout<<"Border";
    }
    else if(x==3*h && (y>=0 && y <= h))
    {
        cout<<"Border";
    }
    else if(x>=h && x<=2*h && y == 4*h)
    {
        cout<<"Border";
    }
    else
    {
        cout<<"Inside";
    }
}