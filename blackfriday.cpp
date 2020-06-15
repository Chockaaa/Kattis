#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
   int n,i,j,k,flag,maxi,temp;
   cin>>n;
   int a[n];
   int output[n][2];
   for(i=0;i<n;i++)
   {
       cin>>a[i];

   }
   k=0;

    for(i=0;i<n;i++)
    {   flag=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag++;
            }

        }

        if(flag==1)
        {
            output[k][0]=a[i];
            output[k][1]=i+1;
            k++;

        }
    }
    if(k==0)
    {
        cout<<"none";
    }
    else
        {
    maxi=output[0][0];
    temp=output[0][1];
    for(i=1;i<k;i++)
    {
        if(output[i][0]>maxi)
        {
            temp=output[i][1];
        }
    }
    cout<<temp;
        }
}