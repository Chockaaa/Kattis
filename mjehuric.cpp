#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
   int x[5],temp;
   cin>>x[0]>>x[1]>>x[2]>>x[3]>>x[4];

   while(true)
   {
       if(x[0]>x[1])
       {
           temp=x[1];
           x[1]=x[0];
           x[0]=temp;
           cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<" "<<x[3]<<" "<<x[4]<<endl;
       }
       if(x[1]>x[2])
       {
           temp=x[2];
           x[2]=x[1];
           x[1]=temp;
           cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<" "<<x[3]<<" "<<x[4]<<endl;
       }
       if(x[2]>x[3])
       {
           temp=x[3];
           x[3]=x[2];
           x[2]=temp;
           cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<" "<<x[3]<<" "<<x[4]<<endl;
       }
       if(x[3]>x[4])
       {
           temp=x[4];
           x[4]=x[3];
           x[3]=temp;
           cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<" "<<x[3]<<" "<<x[4]<<endl;
       }
       if(x[0]==1&&x[1]==2&&x[2]==3&&x[3]==4&&x[4]==5)
       {
           break;
       }

   }


}