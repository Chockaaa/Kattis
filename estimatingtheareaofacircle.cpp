#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

int main() {

   double a,b,c;
   cin>>a>>b>>c;
   while(a!=0 &&b!=0 &&c!=0)
   {
       cout<<M_PI*a*a<<"\t";
       cout<<(c/b)*4*a*a<<endl;


       cin>>a>>b>>c;
   }


}