#include<iostream>
using namespace std;

bool isCorrectAliases(string a[],string b[],int s);

main()
{
    string first[] ={"Adrian M.","harriet S.","Mandy T."};
    string second[]={"Amazing Artichoke","Hopeful Hedgehog","Marvelous Mouse"};
    int size= sizeof(first)/sizeof(first[0]);

    cout<< isCorrectAliases(first,second,size);
}

bool isCorrectAliases(string a[],string b[],int s)
{
    int count =0;
    for(int x=0; x<s; x++)
    {
        if(a[x] == " " && a[x+1] == b[x+1])
        {
            count++;
        }
    }
    if(count == s)
    {
        return true;
    }
    else
    {
        return false;
    }
}