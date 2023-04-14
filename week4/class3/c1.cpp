#include<iostream>
using namespace std;

int strMatchBy1char(char a[8],char b[7]);

main()
{
    char aa[8]={'y','y','t','a','a','z','z','\0'};
    char bb[7]={'y','y','j','a','a','z','\0'};
    
    int result= strMatchBy1char(aa,bb);
    cout<< result;
}

int strMatchBy1char(char a[8],char b[7])
{
    int count =0;
   for(int x=0; x<=8; x++)
   {

       if(a[x] == b[x])
       {
           
           count++;
       }
   }
     return count;
}