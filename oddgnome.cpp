#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int x,a,j,temp,past,check,flag;
    cin>>x;
    while(x>0)
    {   check=0;
        flag=0;
        cin>>j;
        cin>>temp;
        past=temp;
        for(a=1;a<j;a++)
        {
            cin>>temp;

            if(temp!=(past+1)&&flag==0)
                {
                   check=a+1;
                   flag=1;
                }

            past=temp;

        }
        cout<<check<<endl;

        x--;
    }

}