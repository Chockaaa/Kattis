#include <cstring>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    int a[4];
    int i;
    int low,high;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    low=a[0];
    high=0;
    for(i=0;i<4;i++)
    {
     if(a[i]<low)
     {
         low=a[i];
     }

     if(a[i]>high)
     {
         high=a[i];
     }

    }

    for(i=0;i<4;i++)
    {
     if(high==a[i])
     {
        a[i]=0;
        break;
     }
    }

    int mid;
    mid=0;
    for(i=0;i<4;i++)
    {
     if(a[i]>mid)
     {
         mid=a[i];
     }
    }

    cout<<low*mid;




}