#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a,b,c,d,t,temp;

    cin>>a>>b;
    cin>>c>>d;
    cin>>t;

    temp=abs(d-b)+abs(c-a);
    if((t-temp)%2==0 && temp<=t)
    {
        cout<<"Y";
    }
    else
    {
        cout<<"N";
    }

}
