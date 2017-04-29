#include<iostream>
#include<biginteger.h>
using namespace std;
int main()
{
     int t,n;
     big_int fact;
cin>>t;
for(int i=0;i<t;i++)
{fact=1;
    cin>>n;
    for(int j=n;j>=1;j--)
    {
        fact=fact*j;
    }
    cout<<fact<<"\n";
}
return 0;
}
