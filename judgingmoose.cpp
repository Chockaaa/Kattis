#include <iostream>
#include <cmath>
#include <math.h>
#include <cstring>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    if(a==0&&b==0)
    {
        cout<<"Not a moose";
    }
    else if(a==b)
    {
        cout<<"Even "<<a+b;
        return 0;
    }
    else if(a>b)
    {
        cout<<"Odd "<<2*a;
    }
    else if(b>a)
    {
        cout<<"Odd "<<2*b;
    }


}