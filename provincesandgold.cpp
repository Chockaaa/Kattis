#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c;

    cin>>a>>b>>c;

    int sum;
    sum=a*3+b*2+c*1;

    if(sum>=8)
    {
        cout<<"Province or ";
    }
    else if(sum>=5)
    {
        cout<<"Duchy or ";
    }
    else if(sum>=2)
    {
        cout<<"Estate or ";
    }


    if(sum>=6)
    {
        cout<<"Gold";
    }
    else if(sum>=3)
    {
        cout<<"Silver";
    }
    else if(sum>=0)
    {
        cout<<"Copper";
    }


    cout<<endl;
}