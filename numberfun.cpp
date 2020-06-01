#include <iostream>
using namespace std;
int main()
{

    int x;
    cin>>x;
    float a,b,c;
    while(x>0)
    {
        cin>>a>>b>>c;
        if((a+b==c)||(a-b==c)||(a*b==c)||(a/b==c)||(b-a==c)||(b/a==c))
        {
            cout<<"Possible\n";
        }
        else
        {
            cout<<"Impossible\n";
        }

        x--;
    }
}
