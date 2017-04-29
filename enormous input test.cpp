#include<iostream>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]%k==0)
            c=c+1;
    }
    cout<<c;
    return 0;
}
