#include <cstring>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
   int a,b,c;

   cin>>a>>b>>c;

   int d,val,q;
   q=0;
   d=a+b;
   val=0;
   while(d>=c)
   {    q=d/c;
        val+=d/c;
       d=d%c+q;
   }

   cout<<val;


}