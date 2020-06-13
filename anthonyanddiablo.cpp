#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,n,temp;

    cin>>a>>n;
    temp=n/M_PI/2;
    temp=M_PI*temp*temp;
    if(temp>a)
    {
        cout<<"Diablo is happy!";
    }
    else
    {
        cout<<"Need more materials!";
    }

}