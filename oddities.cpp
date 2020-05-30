#include <iostream>
using namespace std;
int main()
{   int x,temp;
    cin>>x;

    while(x>0)
    {
        cin>>temp;

        if(temp%2==0)
        {
            cout<<temp<<" is even\n";
        }
        else if(temp%2==1 || temp%2==-1)
        {
            cout<<temp<<" is odd\n";
        }
        x--;
    }
}