#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(int l=0;l<n;l++)
    {
        cout<<a[l]<<endl;
    }
    return 0;
}
