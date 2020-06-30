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
    long long int sum,a,temp;

    cin>>x;
    int i,j;

    for(i=0;i<x;i++)
    {   sum=0;
        cin>>a;
        for(j=0;j<a;j++)
        {
            cin>>temp;
            sum+=temp%a;
        }
        if(sum%a==0 )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}