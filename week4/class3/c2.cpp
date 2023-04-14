#include<iostream>
using namespace std;

string flipEndChars(char a[],int len);

main()
{
    char aa[]={"Cat,dog and mouse."};
    int length = sizeof(aa)/sizeof(aa[0]);
    string result = flipEndChars(aa,length);
    cout<< result;
}


string flipEndChars(char a[],int len)
{
    char c;
    if(len < 2)
    {
        return "Incompatible.";
    }
    else if(a[0]==a[len-1])
    {
        return "Two's pair.";
    }
    else
    {
        c = a[0];
        a[0]=a[len-1];
        a[len-1]=c;
        cout<< a[len];
    }
}