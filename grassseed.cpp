#include <iostream>
#include <iomanip>

int main(){
  
  double c, l, wid, len, total, ctotal;
  
  std::cin >> c >> l;
  
  for (int i = 0; i < l; i++){
    std::cin >> wid >> len;
    
    total = wid*len*c;
    ctotal += total;
  }
  
  std::cout << std::setprecision(12) << ctotal;
  
  return 0;
}