#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,up,low;
    cin>>t;
    while(t--)
    {
        up=0,low=0;
        cin>>a>>b>>c;
       up=(a>b?(a>c?a:c):(b>c?b:c));
       low=(a<b?(a<c?a:c):(b<c?b:c));
       if(a<up && a>low)
        cout<<a<<endl;
        if(b<up && b>low)
        cout<<b<<endl;
         if(c<up && c>low)
        cout<<c<<endl;
    }
    return 0;
}
