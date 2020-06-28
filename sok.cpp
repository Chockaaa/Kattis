#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {

    std::cout << std::fixed;
    std::cout << std::setprecision(6);
   double a,b,c;
   double d,e,f;
   double unit1,unit2,unit3,unit;
   cin>>a>>b>>c;
   cin>>d>>e>>f;

    int maxi;
    unit1=a/d*1;
    unit2=b/e*1;
    unit3=c/f*1;


   unit=min(unit1, min(unit2, unit3));

   a=a-d*unit;
       b=b-e*unit;
       c=c-f*unit;
    if(a<0)
    {a=0;}

    if(b<0)
    {b=0;}
    if(c<0)
    {c=0;}





    cout<<a<<"\t"<<b<<"\t"<<c;


    }
