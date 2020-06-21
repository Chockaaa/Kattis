#include <cstring>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    int d;
    d=max(c-b,b-a)-1;
    cout<<d;

}