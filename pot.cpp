#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{   int x,base,power,sum,temp,value,i;
    cin>>x;
    sum=0;
    while(x>0)
    {
      cin>>temp;
      power=temp%10;
      base=temp/10;
      value=1;
      for(i=0;i<power;i++)
      {
          value=value*base;
      }
      sum+=value;

      x--;
    }
    cout<<sum;
}