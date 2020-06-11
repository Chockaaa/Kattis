#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int x,temp,i,counter,flag,j;
    cin>>x;
    while(x>0)
    {
        cin>>temp;
        counter=0;
        string word[temp];
        for(i=0;i<temp;i++)
        {
            cin>>word[i];
        }

        for(i=0;i<temp;i++)
        {   flag=0;
            for(j=i+1;j<temp;j++)
            {
                if(word[i]==word[j])
                {
                    flag++;
                }
            }

            if(flag==0)
            {
                counter++;
            }
        }
        cout<<counter<<endl;

        x--;
    }
}

