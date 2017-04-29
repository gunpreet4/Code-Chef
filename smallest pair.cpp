#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   long int t,n,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
          sort(a,a+n);
        sum=a[0]+a[1];
        cout<<sum<<endl;
    }
    return 0;
}
