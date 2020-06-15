#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
   int x,len,i,j;
   cin>>x;

   char start[1000],ende[1000];
   cin>>start;
   cin>>ende;

   len=strlen(start);

   for(j=0;j<x;j++)
   {
        for(i=0;i<len;i++)
        {
            if(start[i]=='0')
            {
                start[i]='1';
            }
            else if(start[i]=='1')
            {
                start[i]='0';
            }
        }

   }

   if(strcmp(start,ende)==0)
   {
       cout<<"Deletion succeeded";
   }
   else
   {
       cout<<"Deletion failed";
   }

}
