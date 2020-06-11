#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char word[200];
    cin>>word;
    int A,B,i;
    A=0;
    B=0;
    for(i=0;i<strlen(word);i=i+2)
    {
        if(word[i]=='A')
        {
            if(word[i+1]=='1')
            {
                A+=1;
            }
            else
            {
                A+=2;
            }
        }
        if(word[i]=='B')
        {
            if(word[i+1]=='1')
            {
                B+=1;
            }
            else
            {
                B+=2;
            }
        }
    }


        if(A>B)
        {
            cout<<"A";
        }
        else
        {
            cout<<"B";
        }




}
