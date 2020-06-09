#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int temp,i,low,date;
    cin>>low;
    for(i=1;i<x;i++)
    {   cin>>temp;
        if(temp<low)
        {
            low=temp;
            date=i;
        }
    }
    cout<<date;

}