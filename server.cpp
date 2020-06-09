#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x,time,i;
    cin>>x>>time;
    int word[x];
    int sum,counter;
    sum=0;
    counter=0;
    for(i=0;i<x;i++)
    {
        cin>>word[i];
        sum+=word[i];
        if(sum<=time)
        {
            counter++;
        }
    }

    cout<<counter;


}