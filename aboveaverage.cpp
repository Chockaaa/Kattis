#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main() {
    std::cout << fixed<< std::setprecision(3);
    float x,i,avg,counter;
    int j,temp;
    cin>>x;

    for(i=0;i<x;i++)
    {
        cin>>temp;
        int value[temp];
        float sum;
        sum=0;
        for(j=0;j<temp;j++)
        {
            cin>>value[j];
            sum+=value[j];
        }
        counter=0;
        avg=sum/temp;

        for(j=0;j<temp;j++)
        {
            if(value[j]>avg)
            {
                counter++;
            }
        }

        double outval;
        outval=(counter/temp)*100;
        cout<<outval<<"%"<<endl;
    }

}