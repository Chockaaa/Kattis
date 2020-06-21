#include <cstring>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int x,i,j;
  double value;
  cin>>x;
  double val[x][2];

  for(i=0;i<x;i++)
  {
      cin>>val[i][0]>>val[i][1];
  }
  value=0;
  for(i=1;i<x;i++)
  {
      value+=((val[i][1]+val[i-1][1]))*(val[i][0]-val[i-1][0])/2;
  }

    std::cout << std::setprecision(10);
    cout<<value/1000<<endl;
}
