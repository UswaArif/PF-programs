#include<iostream>
using namespace std;

int fruitprice(string fru[4],int p[4]);

main()
{
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};

    

    int result = fruitprice(fruit,price);
    cout<<"The amount of that fruit is:"<< result;

}

int fruitprice(string fru[4],int p[4])
{
    float amount;
    string f;
    cout<<"Enter the name of fruit:";
    cin>> f;
    int quan;
    cout<<"Enter the quantity:";
    cin>> quan;

    for(int i=0;i<4; i++)
    {
        if(fru[i] == f)
        {
            cout<<"Price:"<< p[i] << endl;
            amount = p[i]*quan;
        }

    }
    return amount;
}