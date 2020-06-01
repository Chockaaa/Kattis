#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char month[3];
    int date;

    cin>>month>>date;

    if(strcmp(month,"OCT")==0 && date==31)
    {
        cout<<"yup";

    }
    else if(strcmp(month,"DEC")==0 &&date==25)
    {

        cout<<"yup";
    }
    else
    {
        cout<<"nope";
    }


}
