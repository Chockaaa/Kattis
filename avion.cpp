#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

int main() {
    int j,i;
    j=0;
    int val[5];
    string temp;
    for(i=1;i<=5;i++)
    {
        cin>>temp;

    std::size_t found = temp.find("FBI");
    if (found!=std::string::npos)
    {val[j]=i;
    j++;
    }
    }

    if(j!=0)
    {

    for(i=0;i<j;i++)
    {
        cout<<val[i]<<"\t";
    }
    }
    else
    {
        cout<<"HE GOT AWAY!";
    }

}
