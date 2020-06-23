#include <cstring>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

int main() {

    int x,i,j,counter,flag,a;
    counter=0;
    char temp[1000];
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>temp;
        flag=0;
        a=strlen(temp);
        for(j=0;j<strlen(temp)-1;j++)
        {
            if(temp[j]=='C'&& temp[j+1]=='D')
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