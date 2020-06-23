#include <cstring>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    int x;

    cin>>x;
    double val1,val2;
    cout.precision(6);
    cout<<fixed;
    val1=M_PI*x*x;
    val2=x*x*2;

    cout<<val1<<endl<<val2;


}