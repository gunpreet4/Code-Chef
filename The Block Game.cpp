#include<iostream>
using namespace std;
int main()
{
    int t,n,rev,rem,temp;
    cin>>t;
    while(t--)
    {
        temp=rev=rem=0;
        cin>>n;
        temp=n;
        while(n>0)
        {
            rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
        }
        if(rev==temp)
            cout<<"wins"<<endl;
        else
            cout<<"losses"<<endl;
    }
    return 0;
}
