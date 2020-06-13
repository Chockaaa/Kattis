#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i,x,n,temp,sum,mini,maxi;
    x=1;
    for(x=1;cin>>n;x++)
    {

        for(i=0;i<n;i++)
        {   cin>>temp;
            if(i==0)
            {
                mini=temp;
                maxi=temp;
            }


            if(temp<mini)
            {
                mini=temp;
            }

            if(temp>maxi)
            {
                maxi=temp;
            }
        }

        cout<<"Case "<<x<<": "<<mini<<"\t"<<maxi<<"\t"<<maxi-mini<<endl;

    }



}
