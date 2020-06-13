#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char word[50];
    int sum,T,G,C,i;
    cin>>word;
    T=0;
    G=0;
    C=0;
    sum=0;
    for(i=0;i<strlen(word);i++)
    {
        if(word[i]=='T')
        {
            T++;
        }
        else if(word[i]=='G')
        {
            G++;
        }
        else if(word[i]=='C')
        {
            C++;
        }
    }

        sum = min(min(T, C), G) * 7;
        sum+=T*T+G*G+C*C;


        cout<<sum;
}


