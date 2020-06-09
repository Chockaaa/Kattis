#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    while(n>0)
    {
        cin>>a>>b>>c;
        if(b-c>a)
        {
            cout<<"advertise";
        }
        else if(b-c==a)
        {
            cout<<"does not matter";
        }
        else
        {
            cout<<"do not advertise";
        }


        cout<<endl;

        n--;
    }


}