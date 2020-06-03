#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int cup[3]={1,0,0};
    int i;
    char word[50];
    cin>>word;
    int temp;

    for(i=0;i<strlen(word);i++)
    {
        if(word[i]=='A')
        {
            temp=cup[0];
            cup[0]=cup[1];
            cup[1]=temp;
        }
        else if(word[i]=='B')
        {
            temp=cup[1];
            cup[1]=cup[2];
            cup[2]=temp;

        }
        else if(word[i]=='C')
        {
            temp=cup[0];
            cup[0]=cup[2];
            cup[2]=temp;
        }
    }
    for(i=0;i<3;i++)
    {
        if(cup[i]==1)
        {
            cout<<i+1;
        }
    }


}
