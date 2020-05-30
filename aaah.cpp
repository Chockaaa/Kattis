#include <iostream>
#include <cstring>
using namespace std;
int main()
{   char first[999],second[999];

    cin>>first;
    cin>>second;
    if(strlen(first)<strlen(second))
    {
        cout<<"no";
    }
    else
    {
        cout<<"go";
    }

}
