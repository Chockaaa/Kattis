#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a1,a2,a3,a4;
    int b1,b2,b3,b4;

    int as,bs;

    cin>>a1>>a2>>a3>>a4;
    cin>>b1>>b2>>b3>>b4;

    as=a1+a2+a3+a4;
    bs=b1+b2+b3+b4;

    if(as>bs)
    {
        cout<<"Gunnar";
    }
    else if(as<bs)
    {
        cout<<"Emma";
    }
    else
    {
        cout<<"Tie";
    }

}
