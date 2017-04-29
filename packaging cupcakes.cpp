#include<iostream>
using namespace std;
int main()
{
    int t,r,ans,rem;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ans=0,r=0;
        int n;
        cin>>n;
        ans=(n/2)+1;
        cout<<ans<<endl;
    }
    return 0;
}
