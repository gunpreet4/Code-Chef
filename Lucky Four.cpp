#include<iostream>
using namespace std;
int main()
{
    int t,n,r,count;
    cin>>t;
    while(t--)
    {
        r=n=count=0;
        cin>>n;
        while(n>0)
        {
            r=n%10;
            if(r==4)
                count++;
            n=n/10;
        }
        cout<<count<<endl;
    }
}
