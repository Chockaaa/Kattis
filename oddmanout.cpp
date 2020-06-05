#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    int x,temp,i,j,flag,k;
    cin>>x;

    for(k=1;k<=x;k++)
    {
            cin>>temp;
            int bank[temp];

            for(i=0;i<temp;i++)
            {
                cin>>bank[i];
            }

            for(i=0;i<temp;i++)
            {   flag=0;
                for(j=0;j<temp;j++)
                {
                    if(bank[i]==bank[j])
                    {
                        flag++;
                    }

                }
                if(flag!=2)
                {
                    cout<<"Case #"<<k<<": "<<bank[i]<<"\n";
                    break;
                }
            }

    }

}
