#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    double area;
    double len;

    cin>>area;
    len=sqrt(area);
    std::cout << std::setprecision(16);
    cout<<len*4;
}
