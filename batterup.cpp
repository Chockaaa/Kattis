#include <cstring>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {


    int x;


std::cout << std::setprecision(6);
    cin>>x;

    float last,i,temp;
    last=x;
    float sum;
    sum=0;
    for(i=0;i<x;i++)
    {
        cin>>temp;
        if(temp==-1)
        {
            last--;
        }
        else
        {
            sum+=temp;
        }
    }
    float finally;
    finally=sum/last;
    cout<<finally;
}
