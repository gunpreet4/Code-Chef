#include<iostream>
using namespace std;
int main()
{
    int t,i,j,n,c[6]={100,50,10,5,2,1};
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int s=0;
        for( j=0;j<6;j++)
        {
           s+=n/c[j];
           n=n%c[j];
        }
        cout<<s<<"\n";
    }
    return 0;
}
