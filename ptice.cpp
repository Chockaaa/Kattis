#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int x,i,a,b,g,maximum;
    cin>>x;
    char name[x];
    int namef[x];

    cin>>name;

    for(i=0;i<x;i++)
    {
        if(name[i]=='B')
        {
            namef[i]=1;
        }
        else if(name[i]=='A')
        {
            namef[i]=0;
        }
        else if(name[i]=='C')
        {
            namef[i]=2;
        }


    }




    int adrian[3]={0,1,2};
    int bruno[4]={1,0,1,2};
    int goran[6]={2,2,0,0,1,1};

    int adrianf[x],brunof[x],goranf[x];

    for(i=0;i<x;i++)
    {
        adrianf[i]=adrian[i%3];
        brunof[i]=bruno[i%4];
        goranf[i]=goran[i%6];
    }
    a=0;
    b=0;
    g=0;
    for(i=0;i<x;i++)
    {
        if(namef[i]==adrianf[i])
        {
            a++;
        }
        if(namef[i]==brunof[i])
        {
            b++;
        }
        if(namef[i]==goranf[i])
        {
            g++;
        }
    }
    maximum = max(max(a, b), g);

    cout<<maximum<<endl;
    if(a == maximum) {
        cout << "Adrian" << endl;
    }
    if(b == maximum) {
        cout << "Bruno" << endl;
    }
    if(g == maximum) {
        cout << "Goran" << endl;
    }


}