#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int oldtime,timetotal,time,speed,sum;
int x,i;
cin>>x;
while(x!=-1)
{   timetotal=0;
    sum=0;
    for(i=0;i<x;i++)
    {   oldtime=timetotal;
        cin>>speed>>timetotal;
        time=timetotal-oldtime;
        sum+=time*speed;
    }
    cout<<sum<<" miles\n";
    cin>>x;
}
}