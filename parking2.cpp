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
    int i,j,temp,mini,maxi,flag;
    cin>>x;

    for(i=0;i<x;i++)
    {   mini=100000;
        maxi=0;
        cin>>temp;
        for(j=0;j<temp;j++)
        {
            cin>>flag;
            if(flag<mini)
            {
                mini=flag;
            }

            if(flag>maxi)
            {
                maxi=flag;
            }
        }

        cout<<((maxi-mini)*2)<<endl;
    }

}