#include <iostream>
using namespace std;
int main()
{
    int a[4],b[4],i;
    int alpha,bravo;
    int counter,flag;

    cin>>a[0]>>b[0];
    cin>>a[1]>>b[1];
    cin>>a[2]>>b[2];

    alpha=a[0];
    bravo=0;

    counter=0;
    flag=0;
    for(i=0;i<3;i++)
    {
        if(a[i]==alpha)
        {
            counter++;
        }
        else
        {
            bravo=a[i];
            flag++;
        }
    }
    flag==1?a[3]=bravo:a[3]=alpha;


    alpha=b[0];
    bravo=0;

    counter=0;
    flag=0;
    for(i=0;i<3;i++)
    {
        if(b[i]==alpha)
        {
            counter++;
        }
        else
        {
            bravo=b[i];
            flag++;
        }
    }
    flag==1?b[3]=bravo:b[3]=alpha;

    cout<<a[3]<<" "<<b[3];


}