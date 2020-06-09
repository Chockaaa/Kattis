#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a,b;
    string temp;
    cin>>a>>b;
    int cap,num,counter;
    counter=0;
    cap=0;
    while(b>0)
    {
        cin>>temp>>num;
        if(temp=="enter")
        {
            if(cap+num<=a)
            {
                cap=cap+num;
            }
            else
            {
                counter++;
            }
        }
        else
        {
            cap=cap-num;
        }

        b--;
    }

    cout<<counter;

}
