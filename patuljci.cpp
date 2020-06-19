#include <cstring>
#include <iostream>

using namespace std;

int main() {

   int name[9];
   int i,sum,diff,j,a,b,val,flag;
   sum=0;
   flag=0;
   for(i=0;i<9;i++)
   {
       cin>>name[i];
       sum+=name[i];
   }

    diff=sum-100;

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j==i)
            {

            }
            else
            {
                val=name[i]+name[j];
                if(val==diff)
                {
                    a=i;
                    b=j;

                    flag=1;
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }

    for(i=0;i<9;i++)
   {   if(i==a || i==b)
    {

    }
    else
    {
        cout<<name[i]<<endl;
    }
   }


}