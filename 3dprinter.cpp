#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>

#include <bits/stdc++.h>

using namespace std;

int main() {

    double n;
    int day,i;
    cin>>n;
    day=0;
    for(i=1;i<n;i+=i)
    {
        day++;
    }
    day++;
   cout<<day;
}