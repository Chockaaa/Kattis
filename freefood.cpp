#include <cstring>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

int main() {

    int i,x,a,b,j,counter,flag;
    cin>>x;
    int k;
    k=0;
    int dates[100000];

    for(i=0;i<x;i++)
    {
        cin>>a>>b;

        for(j=a;j<=b;j++)
        {
            dates[k]=j;
            k++;
        }

    }
counter=0;
    for(i=0;i<k;i++)
    {   flag=0;
        for(j=i+1;j<k;j++)
        {
            if(dates[i]==dates[j])
            {
                flag++;
            }
        }
        if(flag==0)
        {

            counter++;
        }
    }
cout<<counter;
}