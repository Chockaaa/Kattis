#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    if(a%2==1 && b%2==0 ||a%2==0 && b%2==0)
    {
        cout<<"possible";
    }
    else
    {
        cout<<"impossible";
    }
}
