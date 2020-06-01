#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    char input[30];
    cin>>input;

    int x,flag;
    flag=0;
    for(x=0;x<strlen(input)-1;x++)
    {
        if(input[x]=='s'&&input[x+1]=='s')
            {
                cout<<"hiss";
                flag++;
                break;
            }

    }

    if(flag==0)
    {
        cout<<"no hiss";
    }


}