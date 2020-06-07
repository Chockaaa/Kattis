#include <iostream>
using namespace std;
int main()
{
    int x,maxi,i,j,counter,flag;

    cin>>x;
    int input[x];
    for(i=0;i<x;i++)
    {
        cin>>input[i];
    }
    maxi=input[x-1];

    int checklist[maxi];
    for(i=0;i<maxi;i++)
    {
        checklist[i]=i+1;
    }
    flag=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<maxi;j++)
        {
            if(input[i]==checklist[j])
            {
                checklist[j]=0;
                flag++;
            }
        }

    }
    if(flag==maxi)
    {
        cout<<"good job";
    }
    else
    {
    for(j=0;j<maxi;j++)
        {
            if(checklist[j]!=0)
            {
                cout<<checklist[j]<<endl;
            }
        }
    }
}
