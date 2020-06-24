#include <cstring>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
char word[100000];
    std::cout << std::setprecision(15);

    cin>>word;
    double lowc,highc,sym,white;
    lowc=0;
    highc=0;
    sym=0;
    white=0;
    int y,i;
    y=strlen(word);
    for(i=0;i<strlen(word);i++)
    {
        if(word[i]=='_')
        {white++;}
        else if(word[i]>96 && word[i]<123)
        {
            lowc++;
        }
        else if(word[i]>64 && word[i]<91)
        {
            highc++;
        }
        else if(word[i]=='\0')
        {
            break;
        }
        else
        {
            sym++;
        }
    }

    cout<<white/y<<endl;
    cout<<lowc/y<<endl;
    cout<<highc/y<<endl;
    cout<<sym/y<<endl;
}
