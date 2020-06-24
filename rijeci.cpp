#include <cstring>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    int x;
    int a,b,a1,b1;
    a=1;
    b=0;
    cin>>x;
    int i;
    for(i=0;i<x;i++)
        {
            b1=a+b;
            a1=b;
            a=a1;
            b=b1;
        }

        cout<<a<<"\t"<<b;
}
