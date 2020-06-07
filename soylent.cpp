#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
   int x,temp;
   int val;
   cin>>x;

   while(x>0)
   {
       cin>>temp;
       if(temp%400==0)
       {
           cout<<temp/400<<endl;
       }
       else
       {
           cout<<(temp/400)+1<<endl;
       }


       x--;
   }

}