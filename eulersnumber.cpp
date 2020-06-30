#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main() {
   int x;
   std::cout << std::fixed;
    std::cout << std::setprecision(15);
   cin>>x;
   double sum;
   sum=1;
   double val,i,j;
   for(i=1;i<=x;i++)
   {    val=1;
       for(j=1;j<=i;j++)
       {
           val=val*j;
       }
       sum=sum+(1/val);

   }

    cout<<sum;


}