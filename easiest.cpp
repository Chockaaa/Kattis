#include <cstring>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;
int findnum(int val);
int main() {

    int x;

    cin>>x;

    while(x!=0)
    {

        int a=11;
        while(findnum(x)!=findnum(x*a))
        {
            a++;
        }
        cout<<a<<endl;

        cin>>x;
    }


}


int findnum(int val)
{
    int flag=0;

    while(val>0)
    {
        flag+=val%10;
        val=val/10;
    }

    return flag;
}
