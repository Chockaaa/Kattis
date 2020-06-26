#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c;
    c=1;
    while(cin>>a && cin>>b)
    {
        int days;
        days=0;
        cout << "Case " << c << ": ";
        while(a!=0 || b!=0)
        {
            days++;
            a++;
            b++;

            a=a%365;
            b=b%687;
        }

        cout<<days<<endl;
        c++;
    }

}
