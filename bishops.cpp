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
   while(cin>>x)
   {
       if(x<1)
       {
           cout<<'0'<<endl;
       }
       else if(x==1)
       {
           cout<<'1'<<endl;
       }
       else
       {
           cout<<x*2-2<<endl;
       }
   }
}
