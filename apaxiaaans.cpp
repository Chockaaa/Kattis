#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char word[250];
    char finalword[250];

    cin>>word;

    int x=0,i;

    for(i=0;i<strlen(word);i++)
    {
        if(word[i]==word[i+1])
        {

        }
        else
        {
            finalword[x]=word[i];
            x++;
        }

    }
    finalword[x]='\0';

    cout<<finalword;

}