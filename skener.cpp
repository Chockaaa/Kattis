#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int i,j;
    string value[a];

    for(i=0;i<a;i++)
    {

            cin>>value[i];

    }
cout<<endl;
int x,z;

    for(i=0;i<a;i++)
    {
        for(x=0;x<c;x++)
            {
        for(j=0;j<b;j++)
        {   for(z=0;z<d;z++)
            {
            cout<<value[i][j];
            }
        }
        cout<<endl;
            }

    }



}