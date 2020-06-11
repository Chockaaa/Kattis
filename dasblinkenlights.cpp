#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,mul;

    cin>>a>>b>>c;
    mul=a*b;
    if(mul/__gcd(a,b)<=c)
    {
            cout<<"yes";

    }
    else
    {
        cout<<"no";
    }

}



