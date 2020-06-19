#include <iostream>

using namespace std;

int main() {
    int n;
    float b,p;

    cin>>n;
    while(n>0)
    {
        cin>>b>>p;
        float low,mid,high;
        mid=60/(p/b);
        low=mid-(60/p);
        high=mid+(60/p);

        cout<<low<<"\t"<<mid<<"\t"<<high<<endl;


        n--;
    }
}