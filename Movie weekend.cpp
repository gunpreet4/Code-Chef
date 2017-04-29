#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,index;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int l[n],r[n],maximum[n];
        for(int i=1;i<=n;i++)
        {
            cin>>l[i];
        }
        for(int j=1;j<=n;j++)
        {
            cin>>r[j];
        }
        for(int k=1;k<=n;k++)
        {
               maximum[k]=l[k]*r[k];
        }

    }
}
