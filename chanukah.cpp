#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int x,a,b,i,sum;

    cin>>x;
    while(x>0)
    {   sum=0;
        cin>>a>>b;

        for(i=1;i<=b+1;i++)
        {
            sum+=i;
        }
        sum--;
        cout<<a<<"\t"<<sum<<endl;
        x--;
    }


}