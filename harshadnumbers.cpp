#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    cin>>x;

    int sum,temp;
    while(true)
    {
    temp=x;
    sum=0;
    while(temp>0)
    {
        sum+=temp%10;
        temp=temp/10;
    }

    if(x%sum==0)
    {
        cout<<x;
        break;
    }
    else
    {
        x++;
    }

}



}
