#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
  int l,d,x,mini,maxi,temp,i,sam;
  cin>>l>>d>>x;
  int a,b;
  a=0;
  b=0;
  for(i=l;i<=d;i++)
  { temp=0;
    sam=i;
      while(sam>0)
      {
          temp+=sam%10;
          sam=sam/10;
      }
      if(temp==x)
      {
          if(a==0)
          {
              mini=i;
              a++;
          }
          if(i<mini)
          {
              mini=i;
          }

      }

      if(temp==x)
      {
          if(b==0)
          {
              maxi=i;
              b++;
          }
          if(i>maxi)
          {
              maxi=i;
          }

      }

  }

    cout<<mini<<endl;
    cout<<maxi<<endl;

}
