#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int x,y;
    int temp,val[10];
    for(x=0;x<10;x++)
    {
        cin>>temp;
        val[x]=temp%42;
    }

    int counter;
    counter=0;
    int flag;
    flag=0;

    for(x=0;x<10;x++)
    {   flag=0;
        for(y=x+1;y<10;y++)
        {
            if(val[x]==val[y])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            counter++;
        }
    }

    cout<<counter;


}