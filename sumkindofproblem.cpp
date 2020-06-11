#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int x,i,sumall,sumodd,sumeven,a,b;

    cin>>x;
    while(x>0)
    {
            sumall=0;
            sumodd=0;
            sumeven=0;
        cin>>a>>b;
        for(i=0;i<b;i++)
        {
            sumall+=i+1;
            sumodd+=1+2*i;
            sumeven+=2+2*i;
        }
        cout<<a<<"\t"<<sumall<<"\t"<<sumodd<<"\t"<<sumeven<<endl;
        x--;
    }
}
