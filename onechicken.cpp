#include <iostream>
using namespace std;
int main()
{
    int chicken,chaz;

    cin>>chaz>>chicken;

    int temp;
    temp=chicken-chaz;

    if(temp>1)
    {
        cout<<"Dr. Chaz will have "<<temp<<" pieces of chicken left over!";
    }
    else if(temp==1)
    {
        cout<<"Dr. Chaz will have "<<temp<<" piece of chicken left over!";
    }
    else if(temp<-1)
    {   temp=temp*-1;
        cout<<"Dr. Chaz needs "<<temp<<" more pieces of chicken!";
    }
    else if(temp==-1)
    {   temp=temp*-1;
        cout<<"Dr. Chaz needs "<<temp<<" more piece of chicken!";
    }
}
