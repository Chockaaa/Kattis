#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int w,l,sum;
    sum=0;
    while(y>0)
    {
        cin>>w>>l;
        sum=sum+w*l;

        y--;
    }

    cout<<sum/x;
}