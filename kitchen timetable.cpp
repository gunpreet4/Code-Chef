#include<iostream>
using namespace std;
int main()
{
unsigned long long n,t;
cin>>t;
for(int i=0;i<t;i++)
    {
       unsigned long long count=0;
    cin>>n;
    unsigned long long a[n],b[n],x[n];
    for(int k=0;k<n;k++)
    {cin>>a[k];}
    for(int m=0;m<n;m++){
    cin>>b[m];}
    x[0]=a[0];
        for(int j=1;j<n;j++)
            {
             x[j]=a[j]-a[j-1];}
             for(int l=0;l<n;l++)
             {
             if(x[l]>=b[l])
             {
                 count=count+1;
             }
            }
cout<<count<<'\n';
    }
    return 0;
}
