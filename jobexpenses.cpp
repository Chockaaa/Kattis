#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{

    int maxi;
    cin>>maxi;
    int val[maxi];
    int x,temp,sum;
    sum=0;

    for(x=0;x<maxi;x++)
    {
        cin>>temp;
        if(temp<0)
        sum+=abs(temp);
    }

    cout<<sum;
}