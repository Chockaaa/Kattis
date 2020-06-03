#include <iostream>
#include <cmath>
using namespace std;
int main()
{


int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
string daysplit[]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
int day,mon,sum,i,value;

cin>>day>>mon;

sum=0;

for(i=0;i<mon;i++)
{
    sum+=month[i];
}
sum+=day;

value=sum%7;
cout<<daysplit[value];



}