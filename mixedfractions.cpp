#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 int x,y,temp;

 cin>>x>>y;

 while(x!=0&&y!=0)
 {
     temp=x/y;
     cout<<temp<<" "<<x%y<<" / "<<y<<"\n";
     cin>>x>>y;
 }

}