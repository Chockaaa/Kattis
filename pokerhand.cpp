#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string hand[5];
    int i,maxi,temp;
    for(i=0;i<5;i++)
    {
        cin>>hand[i];
    }
    maxi=0;
    temp=0;
    int j;
    for(i=0;i<5;i++)
    {   temp=0;
        for(j=0;j<5;j++)
        {
            if(hand[i][0]==hand[j][0])
            {
                temp++;
            }
        }
        if(temp>maxi)
        {
            maxi=temp;
        }
    }


    cout<<maxi;


}
