#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char name[100],word[100];
    cin.getline(name,100);
    int i,j,k;

    k=strlen(name);
    j=0;

    for(i=0;i<k;i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            word[j]=name[i];
            cout<<word[j];
            j++;
            i=i+2;
        }
        else if(name[i]==' ')
        {
            word[j]=name[i];
            cout<<word[j];
            j++;
        }
        else
        {
            word[j]=name[i];
            cout<<word[j];
            j++;
        }

    }
    word[j]='\0';



}