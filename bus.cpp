#include <cstring>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    float x,i,j,q;
    double y;
    cin>>x;

    for(q=0;q<x;q++)
    {
        cin>>j;
    y=0;
    for(i=0;i<j;i++)
    {
        y=y+0.5;
        y=y*2;
    }
    cout<<(long long)y<<endl;

    }

}