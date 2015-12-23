#include <iostream>
using namespace std;

int main()
{   int n;
    cout<<"\nEnter n:";
    cin>>n;

    int prime[n+1];
    for(int i=2;i<=n;i++)
       prime[i]=i;


    for(int i=2;i*i<=n;i++)
        {   for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=0;
            }
        }
    for(int i=2;i<=n;i++)
        if(prime[i]!=0)
        cout<<prime[i]<<" ";
        return 0;
}
