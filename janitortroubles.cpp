#include <cstring>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << setprecision(16);
   long double a,b,c,d,s,q;
   cin>>a>>b>>c>>d;
   s=(a+b+c+d)/2;
    q=sqrt((s-a)*(s-b)*(s-c)*(s-d));
   cout<<q;

}
