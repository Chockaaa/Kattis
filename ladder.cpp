#include <iostream>
#include <cmath>
#include <math.h>
#define PI 3.1415926535897932384626433832795
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    double math;
    b = b*PI/180;

    math=a/sin(b);
    math=ceil(math);
    cout<<math;
}
