#include<iostream>
using namespace std;
int main()
{
    int t,m,n,k,d=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>m>>n>>k;
        if(m>n)
        {
            n=n+k;
            d=m-n;
            if(d<0)
                d=0;
        }
        else if(n>m)
        {
            m=m+k;
            d=n-m;
            if(d<0)
                d=0;
        }
        else
        {
            d=m-n;
        }
        cout<<d<<"\n";
    }
    return 0;
}

