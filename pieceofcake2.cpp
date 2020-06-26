#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>

#include <bits/stdc++.h>

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;

    int c1,c2,c3,c4;

    c1=b*c*4;
    c2=b*(a-c)*4;
    c3=(a-b)*c*4;
    c4=(a-c)*(a-b)*4;

    int value[4]={c1,c2,c3,c4};
    int i,maxi;
    maxi=0;
    for(i=0;i<4;i++)
    {
        if(value[i]>maxi)
        {
            maxi=value[i];
        }
    }

    cout<<maxi;


}