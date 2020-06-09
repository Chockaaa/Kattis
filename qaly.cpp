#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x,i;
    cin>>x;
    cout<<fixed<<setprecision(3);
    float sum,a,b;
    sum=0;
    for(i=0;i<x;i++)
    {
        cin>>a>>b;
        sum=sum+a*b;
    }

    cout<<sum;
}