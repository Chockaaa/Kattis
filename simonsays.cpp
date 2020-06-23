#include <cstring>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

int main() {


   int x,i,flag,found;
   cin>>x;
   cin.ignore();
   string str1="Simon says ";


   for(i=0;i<x;i++)
   {    string str;
        getline(cin, str);
        found=str.find(str1);
        if (found ==0)
        {
            cout << str.substr(10 + 1, str.length() - (11 ))<<endl;
        }
   }


}