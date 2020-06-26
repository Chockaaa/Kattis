#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;

    cin>>a>>b;
    b=b-a;

    if(b>180)
    {
        b=b-360;
    }
    else if(b<=-180)
    {
        b=b+360;
    }



cout<<b<<endl;



}
