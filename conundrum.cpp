#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char name[300];
    cin>>name;
    int flag,i,t;
    flag=0;
    for(i=0;i<strlen(name);i++)
    {
        t=i%3;
        if(t==0)
        {
            if(name[i]!='P')
            {
                flag++;
            }
        }
        else if(t==1)
        {
            if(name[i]!='E')
            {
                flag++;
            }
        }
        else if(t==2)
        {
            if(name[i]!='R')
            {
                flag++;
            }
        }
    }

    cout<<flag;
}