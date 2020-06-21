#include <cstring>
#include <iostream>
#include <cmath>


using namespace std;

int main() {
  int x,j;
cin>>x;
  char in[50],out[50];
  while(x>0)
  {

      cin>>in;
      cin>>out;
      cout<<in<<endl<<out<<endl;
      for(j=0;j<strlen(in);j++)
      {
          if(in[j]==out[j])
          {
              cout<<'.';
          }
          else
          {
              cout<<'*';
          }
      }
      cout<<endl<<endl;
      x--;
  }

}