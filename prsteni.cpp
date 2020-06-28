#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>


using namespace std;

int main() {
   int i,x,k,a;

   cin>>x;
   int number[x];
   for(i=0;i<x;i++)
   {
       cin>>number[i];
   }

   for(i=1;i<x;i++)
   {
       k=number[i];

       for(a=k;a>0;a--)
       {
           if(number[0]%a==0 && number[i]%a==0)
           {
               break;
           }
       }
       cout<<number[0]/a<<"/"<<number[i]/a<<endl;

   }

}
