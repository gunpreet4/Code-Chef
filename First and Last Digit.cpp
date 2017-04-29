#include<iostream>
using namespace std;
int main()
{
    int t,n,l,sum;
    cin>>t;
    while(t--)
    {
        l=sum=0;
        cin>>n;
        sum=n%10;
        while(n>0)
        {
            l=n%10;
            n=n/10;
        }
        sum=sum+l;
        cout<<sum<<endl;
    }
    return 0;
}
