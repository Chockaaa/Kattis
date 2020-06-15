#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
  int x,temp;
  cin>>x;

  temp=((x-2018)*12)+8;


  if(temp%26<12)
  {
      cout<<"yes";
  }
  else
  {
      cout<<"no";
  }


}