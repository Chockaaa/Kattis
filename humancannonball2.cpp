#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>


using namespace std;

int main() {
    int i,j;
    double v,t,x,h1,h2,time;
    double y;

    cin>>j;

    for(i=0;i<j;i++)
    {
        cin>>v>>t>>x>>h1>>h2;

        t=t*M_PI/180;
        time=x/(v*cos(t));
        y = v * time * sin(t) - (0.5 * 9.81 * time * time) ;

        if(y>=h1+1 && y<=h2-1)
        {
            cout<<"Safe\n";
        }
        else
        {
            cout<<"Not Safe\n";
        }

    }

}

