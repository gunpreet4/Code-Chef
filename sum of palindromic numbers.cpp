#include<iostream>
using namespace std;
int main()
{
    int t,l,r,sum,temp,rev;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>l>>r;
        sum=0;
        for(int j=l;j<=r;j++)
        {  temp=j,rev=0;
            while(j>0)
            {
            rev=(rev*10)+(j%10);
            j=j/10;
            }
            if(temp==rev)
            {
            sum=sum+temp;
            }
            j=temp;
        }
    cout<<sum<<endl;
    }

    return 0;
}
