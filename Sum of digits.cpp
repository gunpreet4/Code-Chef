#include<iostream>
using namespace std;
int main()
{
    int t,a,b,s=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        while(a>0)
        {
         b=a%10;
         s=s+b;
         a=a/10;
        }
        cout<<s<<"\n";
        s=0;
    }
    return 0;
}
