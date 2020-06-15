#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
   char word[1000000],output[1000000];

    cin>>word;
    int n;
    n=strlen(word);
    int j,i;
    j=0;
    i=0;
    while(n>0)
    {
        if(word[i]!='<')
            {
                output[j]=word[i];
                j++;
            }
        else if(word[i]=='<')
        {
            j--;
        }

        n--;
        i++;
    }
    output[j]='\0';

    cout<<output;

}
