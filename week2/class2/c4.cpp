#include<iostream>
using namespace std;

int chocolates_parcel(int x,int y,int z);

main()
{
    int small,big,total;
    cout<<"Enter number of small chocolates:";
    cin>> small;
    cout<<"Enter number of big chocolates:";
    cin>> big;
    cout<<"Enter the total grams:";
    cin>> total;
    int result = chocolates_parcel(small,big,total);
    cout<<result;
}
int chocolates_parcel(int x,int y,int z)
{
    int sprice,bprice;
    sprice = x * 2;
    bprice = y * 5;
    cout<< x <<" small chocolates= "<<sprice<<" grams"<< endl;
    cout<< y <<" big chocolates= "<<bprice<<" grams"<<endl;
    int add = sprice+bprice;
    cout<<sprice<<" + "<<bprice<<"="<<add<<" grams"<<endl;
    if(z==add)
    {
        cout<<"Required number of small chocolates = "<<endl;
        return x;
    }
    else
    {
        cout<<"You cannot make any combination to reach "<<endl;
        return z;
    }
}