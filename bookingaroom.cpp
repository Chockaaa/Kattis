#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int r,n,flag,i,j;

    cin>>r>>n;
    int room[n],range[r];
    for(i=0;i<n;i++)
    {
        cin>>room[i];
    }
    if(n==r)
    {
        cout<<"too late";
        return 0;
    }
    for(i=0;i<r;i++)
    {
        range[i]=i+1;
    }



    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            if(room[i]==range[j])
            {
                range[j]=0;
            }
        }
    }
    flag=1;
    for(i=0;i<r;i++)
    {
        if(range[i]!=0)
        {
            cout<<range[i];
            flag=0;
            break;

        }
    }
    if(flag==1)
    {
        cout<<"too late";
    }

}