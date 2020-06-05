#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    double r,c,i;
    cin>>r>>c;
    i=r-c;
    double innerarea,outerarea;

    innerarea=i*i*22/7;
    outerarea=(r)*(r)*22/7;

    cout<<fixed<<setprecision(6)<<(innerarea/outerarea)*100;

}
