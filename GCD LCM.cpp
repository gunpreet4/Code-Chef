#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t,a,b,g,l,gcd(int,int);
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        g=gcd(a,b);
        l=(a*b)/g;
        cout<<g<<" "<<l<<"\n";
    }
    return 0;
}
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
            else
            b=b-a;
    }
    return a;
}
